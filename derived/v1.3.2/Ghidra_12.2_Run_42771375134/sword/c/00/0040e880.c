/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040e880; name: FUN_0040e880
 */


void FUN_0040e880(long param_1,long param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                 int *param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_6 = param_3;
  *param_5 = 0;
  bVar1 = *(byte *)(param_2 + 0x14);
  if ((bVar1 & 7) == 3) {
    if ((bVar1 >> 4 & 1) == 0) {
      param_4 = *(undefined4 *)(param_2 + 0xc);
    }
    iVar2 = *param_6;
    uVar3 = 1;
  }
  else {
    if ((bVar1 & 7) != 2) {
      if (((bVar1 & 7) == 0) && (param_3 == 0)) {
        *param_5 = **(undefined4 **)(param_1 + 0xe8);
        return;
      }
      return;
    }
    if ((bVar1 >> 4 & 1) == 0) {
      param_4 = *(undefined4 *)(param_2 + 0xc);
    }
    iVar2 = *param_6;
    uVar3 = 0;
  }
  iVar2 = FUN_0040e920((int)param_1,iVar2,param_4,uVar3);
  *param_6 = iVar2;
  return;
}


