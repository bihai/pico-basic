///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Copyright Nurve Networks LLC 2008
//
// Filename: XGS_PIC_UART_DRV_V010.H
//
// Original Author: Joshua Hintze
//
// Last Modified: 8.31.08
//
// Description: Header file for XGS_PIC_UART_DRV_V010.c
//
//
//
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// INCLUDES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// watch for multiple inclusions
#ifndef XGS_PIC_UART
#define XGS_PIC_UART

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MACROS
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DEFINES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Comment out if you do not want the UART to stall your program when the transmit buffer gets full
#define STALL_UART


// You can adjust how much space is taken up by the TX/RX buffers here
#define UART1_TX_BUFFER_SIZE	32  // changed from 128 to accommodate the XGS Basic 135 byte packet size
#define UART1_RX_BUFFER_SIZE	135

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// I/O pin map for uart
//
// UART_TX 	  | RF3 | Pin 33 | Output
// UART_RX 	  | RF2 | Pin 34 | Input
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Some VT100 terminal attributes
#define VT100_ATTR_OFF		0
#define VT100_BOLD			1
#define VT100_USCORE		4
#define VT100_BLINK			5
#define VT100_REVERSE		7
#define VT100_BOLD_OFF		21
#define VT100_USCORE_OFF	24
#define VT100_BLINK_OFF		25
#define VT100_REVERSE_OFF	27

#define VT100_ESCAPE_CODE	27

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// GLOBALS
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// EXTERNALS
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

extern volatile unsigned char UART1_tx_buffer[UART1_TX_BUFFER_SIZE];
extern volatile unsigned int UART1_tx_buffer_add_pointer;
extern volatile unsigned int UART1_tx_buffer_send_pointer;
extern volatile unsigned int UART1_tx_buffer_bytes_to_send;

extern volatile unsigned char UART1_rx_buffer[UART1_RX_BUFFER_SIZE];
extern volatile unsigned int UART1_rx_buffer_add_pointer;
extern volatile unsigned int UART1_rx_buffer_out_pointer;
extern volatile unsigned int UART1_rx_buffer_bytes_in_buffer;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PROTOTYPES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Initializes UART1 to the baud rate specified
void UART_Init(unsigned long BaudRate);

// Printf routine for serial port
void UART_printf( const char *buff, ...);

// puts routine for serial port
void UART_puts( const char *buff);

// Attempts to read in Length bytes, returns actual bytes read
int UART_read( unsigned char *Data, int Length);

// Reads in a string up to a carriage return character
int UART_gets(unsigned char *Data);

// Reads in and returns 0 for error or no data, 1 for success
int UART_getchar(void);

// Sends a single byte and returns 0 for error or no data, 1 for success
int UART_putchar(int ch);

// Sends a newline and carriage return
void UART_Newline();

// Initalizes the vt1000 interface
void UART_vt100Init(void);

// Clears the terminal screen
void UART_vt100ClearScreen(void);

// Sets the current cursor position
void UART_vt100SetCursor(unsigned char Line, unsigned char Column);

// Set one of the following attributes
void UART_vt100SetAttr(unsigned char attr);

// A blocking send function. It won't return until the value is sent
void UART_BlockSend(unsigned char ch);

// A blocking read function. It won't return until the value is read
unsigned char UART_BlockRead();

// end multiple inclusions
#endif
