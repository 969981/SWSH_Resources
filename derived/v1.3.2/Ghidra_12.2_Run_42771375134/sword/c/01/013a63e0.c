/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a63e0; name: FUN_013a63e0
 */


void FUN_013a63e0(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_2 == 1) {
    uVar3 = *(undefined8 *)PTR_DAT_027185f8;
    iVar1 = FUN_0132a4a0(param_1 + 0x110,param_3);
    if (-1 < iVar1) {
      lVar2 = FUN_0120e640(uVar3);
      if (lVar2 == param_3) {
        if (iVar1 != 0) {
          FUN_013a64b0(param_1);
          return;
        }
      }
      else {
        param_1 = param_1 + (long)iVar1 * 8;
        uVar3 = FUN_0137a220(*(undefined8 *)(param_1 + 0x400),auStack_38);
        FUN_01383c30(uVar3,1);
        uVar3 = FUN_0137a500(*(undefined8 *)(param_1 + 0x420),auStack_40);
        FUN_01383c30(uVar3,1);
        uVar3 = FUN_0137a7e0(*(undefined8 *)(param_1 + 0x440),auStack_48);
        FUN_01383c30(uVar3,1);
      }
    }
  }
  return;
}


