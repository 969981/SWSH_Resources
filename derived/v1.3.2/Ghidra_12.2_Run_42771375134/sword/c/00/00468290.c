/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468290; name: FUN_00468290
 */


void FUN_00468290(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_02713108;
  puVar1 = PTR_DAT_02712e28;
  if (*(long **)PTR_DAT_02713108 != (long *)0x0) {
    plVar7 = (long *)0x0;
    plVar5 = *(long **)PTR_DAT_02713108;
    do {
      while ((lVar6 = plVar5[1], *(long *)(lVar6 + 0x200) != 0 ||
             ((*(byte *)((long)plVar5 + 0x14) & 0xfe) != 0))) {
        plVar8 = (long *)*plVar5;
joined_r0x00468428:
        plVar7 = plVar5;
        plVar5 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0046842c;
      }
      if (((*(uint *)(lVar6 + 0x26b) >> 0xc & 1) != 0) && (*(int *)(lVar6 + 0x2b8) == -1)) {
        plVar8 = (long *)*plVar5;
        plVar4 = (long *)puVar2;
        if (*(long **)puVar2 != plVar5) {
          plVar4 = plVar7;
        }
        *plVar4 = (long)plVar8;
        if (*(long **)(puVar2 + 8) == plVar5) {
          *(long **)(puVar2 + 8) = plVar7;
          plVar4 = *(long **)(puVar2 + 0x18);
          if (plVar4 <= plVar5) goto LAB_0046839c;
LAB_00468400:
          FUN_00404870(*(undefined4 *)puVar1,plVar5);
        }
        else {
          plVar4 = *(long **)(puVar2 + 0x18);
          if (plVar5 < plVar4) goto LAB_00468400;
LAB_0046839c:
          if (plVar4 + (ulong)*(uint *)(puVar2 + 0x20) * 3 <= plVar5) goto LAB_00468400;
          *plVar5 = *(long *)(puVar2 + 0x10);
          *(long **)(puVar2 + 0x10) = plVar5;
        }
        *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + -1;
        FUN_0048d330(lVar6,1);
        plVar5 = plVar7;
        goto joined_r0x00468428;
      }
      iVar3 = FUN_004c67c0();
      plVar8 = (long *)*plVar5;
      if (iVar3 == 1) goto joined_r0x00468428;
      plVar4 = (long *)puVar2;
      if (*(long **)puVar2 != plVar5) {
        plVar4 = plVar7;
      }
      *plVar4 = (long)plVar8;
      if (*(long **)(puVar2 + 8) == plVar5) {
        *(long **)(puVar2 + 8) = plVar7;
        plVar4 = *(long **)(puVar2 + 0x18);
        if (plVar4 <= plVar5) goto LAB_00468350;
LAB_004683cc:
        FUN_00404870(*(undefined4 *)puVar1,plVar5);
      }
      else {
        plVar4 = *(long **)(puVar2 + 0x18);
        if (plVar5 < plVar4) goto LAB_004683cc;
LAB_00468350:
        if (plVar4 + (ulong)*(uint *)(puVar2 + 0x20) * 3 <= plVar5) goto LAB_004683cc;
        *plVar5 = *(long *)(puVar2 + 0x10);
        *(long **)(puVar2 + 0x10) = plVar5;
      }
      *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + -1;
      plVar5 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_0046842c:
  *PTR_DAT_02712ee0 = 0;
  return;
}


