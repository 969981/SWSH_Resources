/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131cf90; name: FUN_0131cf90
 */


uint FUN_0131cf90(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131cff0:
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar5 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar5)(puVar5);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar5 = puVar5 + -10;
            goto LAB_0131cff4;
          }
        }
        goto LAB_0131cff0;
      }
    }
LAB_0131cff4:
    local_48 = 0x4c11a2e6098d711a;
    local_40 = &DAT_01d290aa;
    local_38 = 4;
    local_30 = 0;
    uVar4 = FUN_0069d1d0(puVar5,&local_48);
    local_28 = uVar4;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))((long *)(local_30 + 0x48));
      uVar4 = local_28 & 0xff;
      local_30 = 0;
    }
    if ((uVar4 & 0xff) != 0) {
      uVar1 = FUN_0069d220(puVar5,&local_28);
      goto LAB_0131d068;
    }
  }
  uVar1 = 0;
LAB_0131d068:
  return uVar1 & 1;
}


