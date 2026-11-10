/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef5d00; name: FUN_00ef5d00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef5d00(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(&UNK_021616b8 +
                   (long)*(int *)(param_1 + 0x198) * 4 + (long)*(int *)(param_1 + 0x194) * 0x1c);
  uVar3 = uVar1;
  if ((int)uVar1 < 0) {
    uVar3 = 8;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  uVar2 = FUN_01510f00(lVar4,0xa2ac4bfdb223d309);
  if ((uVar2 & 1) == 0) {
    FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,uVar1 >> 0x1f ^ 1,uVar3);
  }
  else {
    uStack_38 = _UNK_01d4abe8;
    local_40 = _DAT_01d4abe0;
    FUN_00d941b0(*(undefined8 *)PTR_DAT_02710868,&local_40,1,8);
    FUN_01511120(lVar4,0xa2ac4bfdb223d309);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


