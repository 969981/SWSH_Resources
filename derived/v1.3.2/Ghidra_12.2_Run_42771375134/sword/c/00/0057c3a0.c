/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057c3a0; name: FUN_0057c3a0
 */


float FUN_0057c3a0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                  int param_10,undefined4 param_11,undefined8 param_12)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  fVar6 = DAT_01d4bec0 / param_3;
  fVar2 = powf(param_2,param_4);
  if ((param_10 == -1) || (param_6 <= 1.0)) goto LAB_0057c584;
  switch(param_10) {
  case 6:
    fVar5 = fVar2 * DAT_01d4bbf0;
    fVar3 = powf(fVar2,DAT_01d4c410);
    fVar4 = fVar3 * DAT_01d4c120 + DAT_01d4c574;
    fVar3 = DAT_01d4c124;
    goto LAB_0057c51c;
  case 7:
  case 8:
    fVar5 = fVar2 * 4.5;
    fVar3 = powf(fVar2,DAT_01d4bed0);
    fVar4 = fVar3 * DAT_01d4bd68 + DAT_01d4bf04;
    fVar3 = DAT_01d4c520;
    goto LAB_0057c51c;
  case 9:
    fVar3 = DAT_01d4bdc8;
    break;
  case 10:
    fVar3 = DAT_01d4c5f8;
    break;
  case 0xb:
    fVar5 = fVar2 * 16.0;
    fVar4 = powf(fVar2,DAT_01d4bc80);
    fVar3 = DAT_01d4bce0;
LAB_0057c51c:
    bVar1 = fVar3 <= fVar2;
    fVar2 = fVar5;
    if (bVar1) {
      fVar2 = fVar4;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    goto switchD_0057c43c_default;
  case 0xc:
    fVar3 = DAT_01d4bc80;
    break;
  case 0xd:
    fVar3 = DAT_01d4c568;
    break;
  case 0xe:
    fVar3 = DAT_01d4c410;
    break;
  default:
    goto switchD_0057c43c_default;
  }
  fVar2 = powf(fVar2,fVar3);
switchD_0057c43c_default:
  fVar2 = powf(fVar2,param_5);
LAB_0057c584:
  fVar2 = (float)FUN_0057c140(param_1 / param_3,fVar2,fVar6,param_7,param_8,in_stack_00000000,
                              in_stack_00000008,param_9,param_11,param_12);
  return fVar2 * param_3;
}


