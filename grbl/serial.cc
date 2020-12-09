/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include "serial.h"
#include <zephyr.h>

void serial_init () {}
void serial_write (uint8_t data) {}
uint8_t serial_read () { return 0; }
void serial_reset_read_buffer () {}
uint8_t serial_get_rx_buffer_available () { return 0; }
uint8_t serial_get_rx_buffer_count () { return 0; }
uint8_t serial_get_tx_buffer_count () { return 0; }