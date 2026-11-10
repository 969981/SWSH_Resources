/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01347dc0; name: FUN_01347dc0
 */


undefined8 FUN_01347dc0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715080) {
        puVar5 = puVar5 + -10;
        goto LAB_01347e24;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_01347e24:
  lVar3 = FUN_0130de40(&local_50,puVar5[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50 = lVar3;
  FUN_006d9640(puVar5,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_40 = 6;
  local_38 = 0;
  local_50 = 0x7c08eae870e235e0;
  pcStack_48 = "player";
  FUN_01312f40(DAT_01d4c404,lVar3,&local_50,PTR_DAT_02715088);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_50 = 0x7c08eae870e235e0;
  pcStack_48 = "player";
  local_40 = 6;
  local_38 = 0;
  FUN_01312fc0(lVar3,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_50 = 0x7c08eae870e235e0;
  pcStack_48 = "player";
  local_40 = 6;
  local_38 = 0;
  FUN_01313060(lVar3,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_01313040(DAT_01d4c18c,lVar3);
  return 1;
}


