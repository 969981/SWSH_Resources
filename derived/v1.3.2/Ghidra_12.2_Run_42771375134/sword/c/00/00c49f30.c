/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c49f30; name: FUN_00c49f30
 */


undefined8 FUN_00c49f30(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char local_a0 [8];
  undefined1 auStack_98 [76];
  int local_4c;
  int iStack_48;
  int local_44;
  long local_28;
  
  lVar3 = FUN_00c188d0();
  if (lVar3 != 0) {
    FUN_00bdc170(local_a0);
    if (local_a0[0] == '\0') {
      return 0;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00be66c0();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar3) {
          FUN_00c1cc60(&local_28,puVar5 + -10);
          if (local_28 == 0) {
            return 0;
          }
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
          uVar1 = FUN_00be1980(auStack_98);
          uVar2 = FUN_00be1790(uVar1);
          *(undefined4 *)(local_28 + 0x13e4) = uVar2;
          uVar2 = FUN_00be2000(local_4c + iStack_48 + local_44);
          *(undefined4 *)(local_28 + 0x13e0) = uVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


