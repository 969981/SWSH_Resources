/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd3ca0; name: FUN_00fd3ca0
 */


uint FUN_00fd3ca0(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
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
  puVar1 = PTR_DAT_02722fb0;
  uVar3 = FUN_01510f00(lVar4,*(undefined8 *)PTR_DAT_02722fb0);
  if (((((((uVar3 & 1) == 0) ||
         (uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 8)), (uVar3 & 1) == 0)) ||
        (uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x10)), (uVar3 & 1) == 0)) ||
       ((uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x18)), (uVar3 & 1) == 0 ||
        (uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x20)), (uVar3 & 1) == 0)))) ||
      ((uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x28)), (uVar3 & 1) == 0 ||
       ((uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x30)), (uVar3 & 1) == 0 ||
        (uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x38)), (uVar3 & 1) == 0)))))) ||
     (uVar3 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x40)), (uVar3 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01510f00(lVar4,*(undefined8 *)(puVar1 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar2 & 1;
}


