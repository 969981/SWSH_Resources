/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131c030; name: FUN_0131c030
 */


void FUN_0131c030(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  ulong local_28;
  
  local_38 = 0;
  local_50 = 0xea4544ab259c992;
  pcStack_48 = "camp_delicious";
  local_40 = 0xe;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) goto LAB_0131c0e8;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c0bc:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00c781c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_0131c0c0;
        }
      }
      goto LAB_0131c0bc;
    }
  }
LAB_0131c0c0:
  local_28 = FUN_0069d0f0(puVar3,&local_50);
  if ((local_28 & 0xff) != 0) {
    FUN_0069d120(puVar3,&local_28,param_2);
  }
LAB_0131c0e8:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


