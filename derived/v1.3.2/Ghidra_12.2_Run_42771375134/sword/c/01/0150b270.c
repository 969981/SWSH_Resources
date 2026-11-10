/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150b270; name: FUN_0150b270
 */


void FUN_0150b270(long param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  uVar1 = (undefined1)param_2;
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
  uVar2 = FUN_01510f00(lVar4,0x973fe0e132a339e9);
  uVar3 = (uint)*(byte *)(param_1 + 0x56d);
  if ((uVar2 & 1) == 0 && uVar3 == 0x20) {
    uVar3 = 0x1f;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (uVar3 <= param_2) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x56e) = uVar1;
  return;
}


