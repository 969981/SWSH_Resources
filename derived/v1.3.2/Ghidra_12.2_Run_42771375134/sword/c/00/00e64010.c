/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e64010; name: FUN_00e64010
 */


void FUN_00e64010(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = (**(code **)(**(long **)(param_2 + 0x70) + 0x188))
                    (*(long **)(param_2 + 0x70),PTR_DAT_0271fcb8,0);
  if (iVar2 == 3) {
    plVar3 = *(long **)(param_2 + 0x70);
    *(int *)(param_2 + 0x7c) = (int)param_1;
    *(long *)(param_2 + 0x88) = plVar3[0x17];
    *(long *)(param_2 + 0x80) = plVar3[0x16];
    uVar1 = param_3[1];
    *(undefined8 *)(param_2 + 0x90) = *param_3;
    *(undefined8 *)(param_2 + 0x98) = uVar1;
    (**(code **)(*plVar3 + 0x180))(param_1,plVar3,PTR_DAT_0271e870);
    (**(code **)(*plVar3 + 400))(plVar3,PTR_DAT_0271e898,0);
    (**(code **)(*plVar3 + 0x1f0))(plVar3,1);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0xa0);
  }
  *(undefined4 *)(param_2 + 0x60) = 1;
  *(undefined1 *)(param_2 + 0x6a) = 0;
  return;
}


