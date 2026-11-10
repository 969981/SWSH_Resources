/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009adea0; name: FUN_009adea0
 */


void FUN_009adea0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined1 local_50 [8];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  
  lVar2 = FUN_009425f0(param_1,param_3);
  if (lVar2 != 0) {
    uVar3 = FUN_00942380(param_1);
    iVar1 = FUN_008f9310(uVar3,param_3);
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        lVar4 = FUN_00914330(lVar2,iVar6);
        if ((lVar4 != 0) && (uVar5 = FUN_008e1600(), (uVar5 & 1) == 0)) {
          local_48 = (undefined1)param_3;
          local_47 = (undefined1)iVar6;
          local_46 = local_47;
          FUN_00942450(param_1);
          uVar3 = FUN_009259c0();
          FUN_00941f90(uVar3,local_50,&local_48);
          FUN_0093ad00(param_2,local_50[0]);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return;
}


