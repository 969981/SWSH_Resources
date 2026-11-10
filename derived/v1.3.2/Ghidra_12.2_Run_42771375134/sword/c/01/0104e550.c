/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0104e550; name: FUN_0104e550
 */


void FUN_0104e550(undefined8 param_1,uint param_2,ushort param_3,int param_4)

{
  char *param5;
  ushort uVar1;
  char acStack_120 [256];
  
  param_2 = param_2 & 0xffff;
  uVar1 = 0;
  if (param_2 < 0x2c6) {
    if (((5 < param_2 - 0x281) || ((1 << (ulong)(param_2 - 0x281 & 0x1f) & 0x33U) == 0)) &&
       (param_2 != 0x4f)) goto switchD_0104e5f0_caseD_2c8;
    goto switchD_0104e5f0_caseD_2ce;
  }
  switch(param_2) {
  case 0x2c6:
  case 0x2c7:
    if (param_3 != 3) {
      param_3 = 0;
    }
    uVar1 = param_3;
    break;
  case 0x2c8:
  case 0x2c9:
  case 0x2ca:
  case 0x2cb:
  case 0x2cc:
  case 0x2cd:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
  case 0x2d2:
  case 0x2d3:
  case 0x2d4:
  case 0x2d5:
  case 0x2d6:
  case 0x2d7:
  case 0x2d8:
  case 0x2d9:
  case 0x2da:
  case 0x2db:
  case 0x2dc:
  case 0x2dd:
  case 0x2de:
  case 0x2df:
  case 0x2e0:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e5:
  case 0x2e6:
  case 0x2e7:
  case 0x2e8:
    break;
  default:
    if (((0x31 < param_2 - 0x351) ||
        ((1L << ((ulong)(param_2 - 0x351) & 0x3f) & 0x2080008000001U) == 0)) && (param_2 != 800))
    break;
  case 0x2ce:
  case 0x2e9:
switchD_0104e5f0_caseD_2ce:
    uVar1 = param_3;
  }
switchD_0104e5f0_caseD_2c8:
  param5 = "Common";
  if (param_4 != 0) {
    param5 = "Happy";
  }
  snprintf(acStack_120,0x100,"bin/misc/palma/bin/wave/pv%04d_%03d_%s.wav",param_2,(uint)uVar1,param5
          );
  FUN_008801a0(param_1,acStack_120);
  return;
}


