/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e6620; name: FUN_012e6620
 */


void FUN_012e6620(long param_1)

{
  char **ppcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char *local_60;
  char *local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  *(undefined1 *)(param_1 + 0x850) = 1;
  FUN_0131c9f0(param_1 + 0x370);
  FUN_014bb440(&local_60,PTR_DAT_02727ac8 + 0x198);
  ppcVar1 = &local_60;
  if (local_48 != 0) {
    ppcVar1 = &local_58;
  }
  pcVar9 = *ppcVar1;
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
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar10)(puVar10);
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
          puVar4 = puVar10 + -10;
          goto LAB_012e671c;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_012e671c:
  uVar5 = FUN_012d52c0(puVar4,&local_60);
  FUN_012e0340(0,uVar5,pcVar9);
  uVar6 = FUN_012b7040(*(undefined8 *)(param_1 + 0x710),0x1e);
  if ((uVar6 & 1) == 0) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0))
    {
      plVar8 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
        uVar5 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar5;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_02715080) {
          puVar10 = puVar10 + -10;
          goto LAB_012e67ec;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
LAB_012e67ec:
    FUN_00c754c0(puVar10,&local_60);
    FUN_0069c550(0x3f000000);
    FUN_0131e480(param_1 + 0x450,0xc);
    iVar2 = *(int *)(param_1 + 0x500);
  }
  else {
    FUN_0131e470(param_1 + 0x450);
    iVar2 = *(int *)(param_1 + 0x500);
  }
  if (iVar2 == 2) {
    lVar7 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
    lVar7 = *(long *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x500) = 5;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x500) = 5;
  }
  if ((((lVar7 != 0) && (uVar6 = FUN_0130e360(), (uVar6 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  local_60 = (char *)0x16debc0f88d5c007;
  local_58 = (char *)0x0;
  FUN_0130fad0(param_1,&local_60,0);
  local_60 = (char *)0x28b101e60452d163;
  local_58 = "@Play_Camp_Sleep";
  local_50 = (undefined1 *)0x10;
  local_48 = 0;
  FUN_012d6f60(&local_60,param_1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


