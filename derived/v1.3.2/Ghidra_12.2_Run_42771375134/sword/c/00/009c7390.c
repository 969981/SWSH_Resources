/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c7390; name: FUN_009c7390
 */


void FUN_009c7390(undefined8 param_1,int *param_2,int *param_3,int param_4,uint param_5,uint param_6
                 ,uint param_7,int param_8)

{
  int iVar1;
  
  *param_2 = 0;
  *param_3 = -1;
  if (param_8 != 0) {
    iVar1 = FUN_00965a90(param_4,param_5,param_6 & 1,param_7 & 1,param_8);
    if (iVar1 < 0) {
      if ((param_6 & 1) == 0) {
        *param_2 = param_8;
        *param_3 = -1;
      }
      else {
        iVar1 = FUN_00945420(param_8);
        *param_2 = iVar1;
        *param_3 = -1;
        if ((((param_5 & 0xffff) == 1) && (param_4 == 0x36d)) && (param_8 == 0x30f)) {
          *param_2 = 0x304;
        }
      }
    }
    else {
      *param_2 = 0;
      *param_3 = iVar1;
    }
  }
  return;
}


