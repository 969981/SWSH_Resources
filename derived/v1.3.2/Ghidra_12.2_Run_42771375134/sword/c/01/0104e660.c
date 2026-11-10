/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0104e660; name: FUN_0104e660
 */


void FUN_0104e660(undefined8 param_1,uint param_2,uint param_3,ulong param_4,int param_5)

{
  char *param5;
  char *param6;
  char acStack_120 [256];
  
  param5 = "R";
  if ((param_4 & 1) == 0) {
    param5 = "N";
  }
  param6 = "_M";
  if (param_5 != 0) {
    param6 = "_F";
  }
  if ((param_2 & 0xfffe) != 0x250) {
    param6 = "";
  }
  snprintf(acStack_120,0x100,"bin/misc/palma/bin/rgbled/poke_f_%04d_%03d_%s%s.bin",param_2 & 0xffff,
           param_3 & 0xffff,param5,param6);
  FUN_008801a0(param_1,acStack_120);
  return;
}


