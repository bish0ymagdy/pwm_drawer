/*
 * Bit_Macros.h
 *
 * Created: 11/25/2024 4:28:10 PM
 *  Author: bisho
 */ 


#ifndef BIT_MACROS_H_
#define BIT_MACROS_H_

#define SET_BIT(REG, BIT_NO)		(REG |= (1U<<(BIT_NO)))
#define CLEAR_BIT(REG, BIT_NO)		(REG &= (~(1U<<(BIT_NO))))
#define TOGGLE_BIT(REG, BIT_NO)		(REG ^= (1U<<(BIT_NO)))
#define READ_BIT(REG, BIT_NO)		((REG>>(BIT_NO)) & 1U)


#endif /* BIT_MACROS_H_ */