/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fafb0; name: FUN_004fafb0
 */


undefined8 FUN_004fafb0(long param_1,ulong param_2,char param_3,long *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x280));
  puVar4 = PTR_DAT_027137c8;
  plVar7 = (long *)*param_4;
  if (plVar7 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      plVar9 = (long *)0x0;
LAB_004fb100:
      do {
        plVar10 = plVar7;
        if ((char)plVar10[0xd] == '\0') {
          plVar7 = (long *)plVar10[2];
        }
        else {
          uVar5 = (**(code **)(*plVar10 + 0x10))(plVar10);
          plVar7 = (long *)plVar10[2];
          if ((uVar5 & 1) != 0) {
            plVar8 = param_4;
            if ((long *)*param_4 != plVar10) {
              plVar8 = plVar9 + 2;
            }
            *plVar8 = (long)plVar7;
            uVar2 = *(undefined4 *)puVar4;
            (**(code **)*plVar10)(plVar10);
            FUN_00404870(uVar2,plVar10);
            if (plVar7 == (long *)0x0) break;
            goto LAB_004fb100;
          }
        }
        plVar9 = plVar10;
      } while (plVar7 != (long *)0x0);
    }
    else {
      plVar9 = (long *)0x0;
      plVar10 = (long *)0x0;
      do {
        while (plVar8 = plVar7, (char)plVar8[0xd] != '\0') {
          uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar7 = (long *)plVar8[2];
          if ((uVar5 & 1) != 0) {
            plVar1 = param_4;
            if ((long *)*param_4 != plVar8) {
              plVar1 = plVar10 + 2;
            }
            *plVar1 = (long)plVar7;
            uVar2 = *(undefined4 *)puVar4;
            (**(code **)*plVar8)(plVar8);
            FUN_00404870(uVar2,plVar8);
            plVar8 = plVar10;
          }
          plVar10 = plVar8;
          if (plVar7 == (long *)0x0) goto LAB_004fb0d8;
        }
        if (((plVar9 == (long *)0x0) ||
            (*(char *)((long)plVar8 + 100) < *(char *)((long)plVar9 + 100))) &&
           (*(char *)((long)plVar8 + 100) < param_3)) {
          nn::os::LockMutex((MutexType *)(plVar8 + 5));
          cVar3 = *(char *)((long)plVar8 + 0x6c);
          nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
          if (cVar3 == '\0') goto LAB_004fb0c4;
          plVar7 = (long *)plVar8[2];
          plVar9 = plVar8;
        }
        else {
LAB_004fb0c4:
          plVar7 = (long *)plVar8[2];
        }
        plVar10 = plVar8;
      } while (plVar7 != (long *)0x0);
LAB_004fb0d8:
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        uVar6 = 1;
        goto LAB_004fb174;
      }
    }
  }
  uVar6 = 0;
LAB_004fb174:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x280));
  return uVar6;
}


