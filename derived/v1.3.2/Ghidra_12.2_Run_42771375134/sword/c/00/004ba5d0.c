/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ba5d0; name: FUN_004ba5d0
 */


undefined8 FUN_004ba5d0(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 local_50;
  uint local_48;
  
  if ((param_2 != (long *)0x0) &&
     (uVar3 = (ulong)*(uint *)(param_2 + 1), *(uint *)(param_2 + 1) != 0)) {
    piVar7 = (int *)*param_2;
    if (param_3 == (undefined8 *)0x0) {
      do {
        for (plVar4 = *(long **)(param_1 + 0x128); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if (*(int *)(plVar4 + 1) == *piVar7) {
            local_48 = *(uint *)((long)plVar4 + 0x14);
            local_50 = *(undefined8 *)((long)plVar4 + 0xc);
            goto LAB_004ba700;
          }
        }
        local_48 = local_48 & 0xffffffe0;
        local_50 = 0;
LAB_004ba700:
        FUN_004ba9e0(param_1,*piVar7,&local_50,param_4);
        piVar7 = piVar7 + 1;
      } while (piVar7 != (int *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 4));
    }
    else {
      piVar8 = piVar7;
      do {
        iVar1 = *piVar8;
        for (plVar4 = *(long **)(param_1 + 0x128); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if (*(int *)(plVar4 + 1) == iVar1) {
            local_48 = *(uint *)((long)plVar4 + 0x14);
            local_50 = *(undefined8 *)((long)plVar4 + 0xc);
            bVar2 = *(byte *)(param_1 + 0x9f);
            goto joined_r0x004ba68c;
          }
        }
        local_48 = local_48 & 0xffffffe0;
        local_50 = 0;
        bVar2 = *(byte *)(param_1 + 0x9f);
joined_r0x004ba68c:
        if ((((bVar2 >> 5 & 1) != 0) && (((byte)local_48 >> 4 & 1) != 0)) &&
           (*(uint *)(param_3 + 1) != 0)) {
          lVar6 = (ulong)*(uint *)(param_3 + 1) << 2;
          piVar5 = (int *)*param_3;
          do {
            if (*piVar5 == iVar1) goto LAB_004ba6a8;
            lVar6 = lVar6 + -4;
            piVar5 = piVar5 + 1;
          } while (lVar6 != 0);
        }
        FUN_004ba9e0(param_1,iVar1,&local_50,param_4);
        piVar7 = (int *)*param_2;
        uVar3 = (ulong)*(uint *)(param_2 + 1);
LAB_004ba6a8:
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar7 + uVar3);
    }
  }
  return 1;
}


