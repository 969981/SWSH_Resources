/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b51d0; name: FUN_004b51d0
 */


undefined8 FUN_004b51d0(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if (param_3 != param_4) {
    plVar5 = (long *)(param_1 + 0x10);
    plVar6 = (long *)*plVar5;
    *(undefined1 *)(param_1 + 0x38) = 1;
    puVar1 = (undefined4 *)PTR_DAT_02712a90;
    for (; PTR_DAT_02712a90 = (undefined *)puVar1, plVar6 != (long *)0x0; plVar6 = (long *)*plVar6)
    {
      if ((*(int *)(plVar6 + 2) == param_2) && (plVar2 = (long *)plVar6[1], plVar2 != (long *)0x0))
      {
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0xff;
        local_50 = 0xff;
        local_48 = 0;
        (**(code **)(*plVar2 + 0x10))(plVar2,param_4,&local_70,0);
      }
      puVar1 = (undefined4 *)PTR_DAT_02712a90;
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      if ((long *)*plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        plVar2 = (long *)0x0;
        do {
          while (plVar3 = plVar6, plVar6 = (long *)*plVar3, plVar3[1] != 0) {
            plVar2 = plVar3;
            if (plVar6 == (long *)0x0) goto LAB_004b530c;
          }
          plVar4 = plVar5;
          if (*(long **)(param_1 + 0x10) != plVar3) {
            plVar4 = plVar2;
          }
          *plVar4 = (long)plVar6;
          if (*(long **)(param_1 + 0x18) == plVar3) {
            *(long **)(param_1 + 0x18) = plVar2;
            plVar4 = *(long **)(param_1 + 0x28);
            if (plVar4 <= plVar3) goto LAB_004b52c0;
LAB_004b52f0:
            FUN_00404870(*puVar1);
          }
          else {
            plVar4 = *(long **)(param_1 + 0x28);
            if (plVar3 < plVar4) goto LAB_004b52f0;
LAB_004b52c0:
            if (plVar4 + (ulong)*(uint *)(param_1 + 0x30) * 3 <= plVar3) goto LAB_004b52f0;
            *plVar3 = *(long *)(param_1 + 0x20);
            *(long **)(param_1 + 0x20) = plVar3;
          }
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        } while (plVar6 != (long *)0x0);
      }
LAB_004b530c:
      *(undefined1 *)(param_1 + 0x39) = 0;
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return 1;
}


