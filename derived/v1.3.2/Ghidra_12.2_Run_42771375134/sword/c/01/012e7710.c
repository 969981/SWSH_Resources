/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7710; name: FUN_012e7710
 */


void FUN_012e7710(long param_1)

{
  char **ppcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *local_50;
  char *local_48;
  undefined1 *local_40;
  long local_38;
  long local_30;
  
  if (*(int *)(param_1 + 0x500) == 2) {
    lVar3 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar4 = FUN_0130e360(), (uVar4 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  local_50 = (char *)0x4e95f0c147da0936;
  local_48 = "Play_Camp_recover";
  local_40 = (undefined1 *)0x11;
  local_38 = 0;
  FUN_012d6f60(&local_50,param_1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar5 = FUN_012b65a0(*(undefined8 *)(param_1 + 0x710));
  FUN_0087b570(uVar5,0);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_02715080) {
        puVar7 = puVar7 + -10;
        goto LAB_012e7838;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_012e7838:
  uVar5 = FUN_012d52c0(puVar7,&local_50);
  FUN_014bb440(&local_50,PTR_DAT_02727ac8 + 0xa8);
  ppcVar1 = &local_50;
  if (local_38 != 0) {
    ppcVar1 = &local_48;
  }
  pcVar8 = *ppcVar1;
  if ((local_38 != 0) && (local_50 != (char *)0x0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_50 = (char *)0x0;
  local_48 = (char *)0xcbf29ce484222645;
  local_40 = &DAT_01d38550;
  local_38 = 0;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  FUN_012e0340(0,uVar5,pcVar8);
  return;
}


