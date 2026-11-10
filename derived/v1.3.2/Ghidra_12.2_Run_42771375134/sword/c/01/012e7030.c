/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7030; name: FUN_012e7030
 */


void FUN_012e7030(long param_1)

{
  char **ppcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *local_60;
  char *local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  FUN_0131b4e0(param_1 + 0x370);
  FUN_0131e470(param_1 + 0x450);
  FUN_014bb440(&local_60,PTR_DAT_02727ac8 + 0x198);
  ppcVar1 = &local_60;
  if (local_48 != 0) {
    ppcVar1 = &local_58;
  }
  pcVar6 = *ppcVar1;
  if ((local_48 != 0) && (local_60 != (char *)0x0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = (char *)0x0;
  local_58 = (char *)0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar7 + -10;
          goto LAB_012e712c;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_012e712c:
  uVar5 = FUN_012d52c0(puVar4,&local_60);
  FUN_012e0660(uVar5,pcVar6);
  local_60 = (char *)0x6ba5ccf902d773c5;
  local_58 = "Play_UI_Emotional_Awake";
  local_50 = (undefined1 *)0x17;
  local_48 = 0;
  FUN_012d6f60(&local_60,param_1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


