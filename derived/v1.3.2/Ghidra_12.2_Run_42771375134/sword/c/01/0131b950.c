/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131b950; name: FUN_0131b950
 */


undefined8 FUN_0131b950(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  ulong local_28;
  
  iVar1 = FUN_0131bab0();
  if (((iVar1 == param_2) && (*(int *)(param_1 + 8) == param_2)) ||
     (*(char *)(param_1 + 0xc) != '\0')) {
    return 0;
  }
  if ((PTR_DAT_02727f50[2] != '\0') || (*(int *)(param_1 + 8) != 3)) {
    FUN_0131bc30(0,param_1,0);
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(int *)(param_1 + 8) = param_2;
  local_50 = 0xeb8cb4cd665fb6aa;
  pcStack_48 = "app_state";
  local_40 = 9;
  local_38 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    return 1;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) goto LAB_0131ba6c;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131ba40:
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c781c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_0131ba44;
        }
      }
      goto LAB_0131ba40;
    }
  }
LAB_0131ba44:
  local_28 = FUN_0069d0f0(puVar4,&local_50);
  if ((local_28 & 0xff) != 0) {
    FUN_0069d120(puVar4,&local_28,param_2);
  }
LAB_0131ba6c:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return 1;
}


