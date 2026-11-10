/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131c120; name: FUN_0131c120
 */


undefined8 FUN_0131c120(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0131c184;
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_00c781c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar5 = puVar5 + -10;
        goto LAB_0131c184;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_0131c184:
  local_48 = 0xea4544ab259c992;
  local_40 = "camp_delicious";
  local_38 = 0xe;
  local_30 = 0;
  uVar3 = FUN_0069d0f0(puVar5,&local_48);
  local_28 = uVar3;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))((long *)(local_30 + 0x48));
    uVar3 = local_28 & 0xff;
    local_30 = 0;
  }
  if ((uVar3 & 0xff) == 0) {
    return 0;
  }
  uVar4 = FUN_0069d130(puVar5,&local_28);
  return uVar4;
}


