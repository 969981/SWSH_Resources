/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131b4e0; name: FUN_0131b4e0
 */


void FUN_0131b4e0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  local_48 = 0xf36bfbb481ce3cd3;
  pcStack_40 = "kw20_drowse01_Enabled";
  local_38 = 0x15;
  local_30 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) goto LAB_0131b590;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131b564:
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
          goto LAB_0131b568;
        }
      }
      goto LAB_0131b564;
    }
  }
LAB_0131b568:
  local_28 = FUN_0069d1d0(puVar3,&local_48);
  if ((local_28 & 0xff) != 0) {
    FUN_0069d200(puVar3,&local_28,0);
  }
LAB_0131b590:
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


