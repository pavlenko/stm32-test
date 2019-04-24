#include <stm32f1xx.h>

int main() {
// TIM1 PWM
    RCC -> APB2ENR |= RCC_APB2ENR_TIM1EN; //тактирование TIM1

    TIM1->CR1   |=  TIM_CR1_CMS_0;    //Center-aligned mode 1
    TIM1->CR1   |=  TIM_CR1_ARPE;

    //частота ШИМ
    //прескалер 8 и период 4000 - 3000 Гц
    //частота шины 108 МГц

    TIM1->PSC  = 8;
    TIM1->ARR  = 4000;

    TIM1->CCR1 = 1000;  //начальные значения
    TIM1->CCR2 = 1000;
    TIM1->CCR3 = 1000;

    TIM1->CCMR1 &=  ~TIM_CCMR1_OC1M_0;
    TIM1->CCMR1 |=  TIM_CCMR1_OC1M_1;
    TIM1->CCMR1 |=  TIM_CCMR1_OC1M_2; //110: PWM mode 1

    TIM1->CCMR1 &=  ~TIM_CCMR1_OC2M_0;
    TIM1->CCMR1 |=  TIM_CCMR1_OC2M_1;
    TIM1->CCMR1 |=  TIM_CCMR1_OC2M_2; //110: PWM mode 1

    TIM1->CCMR2 &=  ~TIM_CCMR2_OC3M_0;
    TIM1->CCMR2 |=  TIM_CCMR2_OC3M_1;
    TIM1->CCMR2 |=  TIM_CCMR2_OC3M_2; //110: PWM mode 1

    TIM1->CCER  |=  TIM_CCER_CC1E;   // Capture/Compare 1 output enable
    TIM1->CCER  |=  TIM_CCER_CC1NE;  // Capture/Compare 1 complementary output enable
    TIM1->CCER  |=  TIM_CCER_CC2E;   // Capture/Compare 2 output enable
    TIM1->CCER  |=  TIM_CCER_CC2NE;  // Capture/Compare 2 complementary output enable
    TIM1->CCER  |=  TIM_CCER_CC3E;   // Capture/Compare 3 output enable
    TIM1->CCER  |=  TIM_CCER_CC3NE;  // Capture/Compare 3 complementary output enable

    //DTG[7:0]: Dead-time generator setup  1 mks
    TIM1->BDTR  |= TIM_BDTR_DTG_0;
    TIM1->BDTR  |= TIM_BDTR_DTG_1;
    TIM1->BDTR  |= TIM_BDTR_DTG_2;
    TIM1->BDTR  |= TIM_BDTR_DTG_3;
    TIM1->BDTR  |= TIM_BDTR_DTG_4;
    TIM1->BDTR  |= TIM_BDTR_DTG_5;
    TIM1->BDTR  |= TIM_BDTR_DTG_6;
    TIM1->BDTR  |= TIM_BDTR_DTG_7;

    TIM1->DIER |= TIM_DIER_CC1IE; //Capture/Compare 1 interrupt enable
    //TIM1->DIER |= TIM_DIER_CC2IE; //Capture/Compare 2 interrupt enable
    //TIM1->DIER |= TIM_DIER_CC3IE; //Capture/Compare 3 interrupt enable

    TIM1->CR1 |= TIM_CR1_CEN; //Bit 0 CEN: Counter enable
    TIM1->BDTR  |=  TIM_BDTR_MOE;     //MOE: Main output enable

    NVIC_EnableIRQ (TIM1_CC_IRQn); //разрешить прерывания от таймера
}