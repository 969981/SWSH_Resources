/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4d70; name: FUN_004c4d70
 */


void FUN_004c4d70(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 local_60;
  undefined1 local_58;
  
  lVar3 = *(long *)(param_1 + 0x10);
  plVar6 = *(long **)(lVar3 + 0x40);
  if (plVar6 != (long *)0x0) {
    do {
      while( true ) {
        plVar4 = (long *)plVar6[2];
        iVar5 = *(int *)(param_1 + 0x2c);
        if (plVar4[0xd] == 0) {
          *(int *)(plVar4 + 0xe) = iVar5;
        }
        else {
          FUN_00479810(plVar4[0xd],iVar5);
        }
        uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        if ((uVar2 & 1) == 0) break;
        *(undefined4 *)(plVar6 + 1) = 3;
        iVar5 = -1;
LAB_004c4dfc:
        *(int *)(plVar4 + 0x57) = iVar5;
        local_58 = 0;
        local_60 = 0x400000000;
        FUN_0048c100(plVar4,&local_60,iVar5 == -1);
LAB_004c4e1c:
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_004c4e44;
      }
      if ((int)plVar6[1] != 2) {
        if ((int)plVar6[1] == 3) goto LAB_004c4dfc;
        goto LAB_004c4e1c;
      }
      (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(param_1 + 0x20));
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
LAB_004c4e44:
    lVar3 = *(long *)(param_1 + 0x10);
  }
  puVar1 = PTR_DAT_02712de0;
  for (plVar6 = *(long **)(lVar3 + 0x68); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    FUN_0043ad30(*(undefined8 *)puVar1,plVar6[2],*(undefined8 *)(param_1 + 0x20),
                 *(undefined4 *)(plVar6 + 1));
  }
  return;
}


