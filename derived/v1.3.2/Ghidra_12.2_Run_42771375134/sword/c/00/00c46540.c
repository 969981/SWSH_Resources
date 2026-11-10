/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c46540; name: FUN_00c46540
 */


undefined8 FUN_00c46540(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int local_8f0;
  undefined4 uStack_8ec;
  int local_8e0;
  long local_a8;
  undefined1 auStack_a0 [16];
  long local_90;
  int local_54;
  int local_50;
  int local_4c;
  
  lVar2 = FUN_00c1d960();
  if ((((lVar2 != 0) && (FUN_00bdb920(auStack_a0), local_90 != 0)) &&
      (*(long *)(param_1 + 0x68) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cc60(&local_8f0,puVar5 + -10);
        lVar4 = CONCAT44(uStack_8ec,local_8f0);
        if (lVar4 == 0) {
          return 0;
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        FUN_00bd9f00(&local_8f0,lVar2);
        if (local_8f0 == 0) {
          return 0;
        }
        if (local_a8 == 0x644) {
          uVar1 = FUN_00be2000(local_54 + local_50 + local_4c);
          lVar4 = lVar4 + (ulong)(local_8e0 != 0) * 0x2c;
          *(undefined4 *)(lVar4 + 0x1c0) = uVar1;
          uVar1 = FUN_00be2020(local_54);
          *(undefined4 *)(lVar4 + 0x1c4) = uVar1;
          uVar1 = FUN_00be2040(local_50);
          *(undefined4 *)(lVar4 + 0x1c8) = uVar1;
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


