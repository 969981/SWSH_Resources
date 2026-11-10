/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed57d0; name: FUN_00ed57d0
 */


void FUN_00ed57d0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  
  if (*(char *)((long)param_1 + 0x732) != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
    if (iVar1 == 1) {
      if ((((long *)param_1[0x83] != (long *)param_1[0x84]) &&
          (lVar3 = *(long *)param_1[0x83], lVar3 != 0)) &&
         (puVar4 = *(undefined8 **)(lVar3 + 0x60), puVar4 != (undefined8 *)0x0)) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_00ed5864;
          }
        }
      }
      puVar4 = (undefined8 *)0x0;
LAB_00ed5864:
      local_28 = FUN_0069d2b0(puVar4);
      plVar2 = (long *)FUN_006b92e0(&local_28);
      lVar3 = *plVar2;
      if (lVar3 < 0x248cb78e45b7cfed) {
        if ((lVar3 != -0x2a2929ab25a3a5e3) && (lVar3 != -0x2082084518b4726e)) {
          return;
        }
      }
      else if ((lVar3 != 0x2e2ef64c69511a81) && (lVar3 != 0x248cb78e45b7cfed)) {
        return;
      }
      iVar1 = (**(code **)(*param_1 + 0x188))(param_1,PTR_DAT_0271e8a0,0);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
    else if (iVar1 != 0) {
      return;
    }
    *(undefined1 *)((long)param_1 + 0x732) = 0;
  }
  return;
}


