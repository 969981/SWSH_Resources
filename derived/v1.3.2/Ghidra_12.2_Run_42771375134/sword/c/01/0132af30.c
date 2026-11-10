/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132af30; name: FUN_0132af30
 */


int FUN_0132af30(long *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  int local_78 [6];
  
  local_78[4] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  iVar9 = 0;
  iVar10 = 0;
  plVar11 = param_1 + 0x10;
  plVar12 = param_1;
  do {
    uVar7 = 2;
    if (*param_1 == 0) {
      uVar7 = 1;
    }
    uVar5 = (uint)(*param_1 != 0);
    if (param_1[2] != 0) {
      uVar5 = uVar7;
    }
    if (param_1[4] != 0) {
      uVar5 = uVar5 + 1;
    }
    if (param_1[6] != 0) {
      uVar5 = uVar5 + 1;
    }
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if ((int)((int)param_1[0x54] + uVar5) <= iVar10) {
      piVar3 = (int *)((ulong)local_78 | 4);
      if (local_78[1] <= local_78[0]) {
        piVar3 = local_78;
      }
      piVar4 = local_78 + 2;
      lVar13 = 8;
      if (local_78[2] <= *(int *)((ulong)local_78 | (ulong)(local_78[0] < local_78[1]) << 2)) {
        piVar4 = piVar3;
        lVar13 = (ulong)(local_78[0] < local_78[1]) << 2;
      }
      iVar10 = *(int *)((long)local_78 + lVar13);
      lVar2 = 0xc;
      if (local_78[3] <= iVar10) {
        lVar2 = lVar13;
      }
      iVar8 = *(int *)((long)local_78 + lVar2);
      piVar3 = local_78 + 3;
      if (local_78[3] <= iVar10) {
        piVar3 = piVar4;
      }
      lVar13 = 0x10;
      if (iVar9 <= iVar8) {
        lVar13 = lVar2;
      }
      iVar10 = *(int *)((long)local_78 + lVar13);
      piVar4 = local_78 + 4;
      if (iVar9 <= iVar8) {
        piVar4 = piVar3;
      }
      cVar6 = '\x02';
      if (iVar10 != local_78[1]) {
        cVar6 = '\x01';
      }
      cVar1 = iVar10 == local_78[1];
      if (iVar10 == local_78[0]) {
        cVar1 = cVar6;
      }
      if (iVar10 == local_78[2]) {
        cVar1 = cVar1 + '\x01';
      }
      if (iVar10 == local_78[3]) {
        cVar1 = cVar1 + '\x01';
      }
      if (iVar10 == iVar9) {
        cVar1 = cVar1 + '\x01';
      }
      iVar10 = 0;
      if ((cVar1 == '\x01') && ((int)param_1[0x10] != 0x4f0)) {
        iVar10 = (int)((ulong)((long)piVar4 - (long)local_78) >> 2) + 1;
      }
      return iVar10;
    }
    if (*(int *)((long)plVar11 + 4) != 0) {
      lVar13 = 0;
      do {
        FUN_01329d10(auStack_98,*param_2);
        local_a0 = 0x76c44275498ebae2;
        FUN_012b4250(auStack_88,auStack_98,&local_a0);
        iVar9 = FUN_012b4420(auStack_88,0);
        local_78[0] = local_78[0] + iVar9;
        FUN_01329d10(auStack_98,*param_2,*(undefined4 *)((long)plVar12 + lVar13 + 0x84));
        local_a0 = 0xb8ee9fec040b545a;
        FUN_012b4250(auStack_88,auStack_98,&local_a0);
        iVar9 = FUN_012b4420(auStack_88,0);
        local_78[1] = local_78[1] + iVar9;
        FUN_01329d10(auStack_98,*param_2,*(undefined4 *)((long)plVar12 + lVar13 + 0x84));
        local_a0 = 0xbd6712d3cdc0ef38;
        FUN_012b4250(auStack_88,auStack_98,&local_a0);
        iVar9 = FUN_012b4420(auStack_88,0);
        local_78[2] = local_78[2] + iVar9;
        FUN_01329d10(auStack_98,*param_2,*(undefined4 *)((long)plVar12 + lVar13 + 0x84));
        local_a0 = 0xfbef80262a1cb536;
        FUN_012b4250(auStack_88,auStack_98,&local_a0);
        iVar9 = FUN_012b4420(auStack_88,0);
        local_78[3] = local_78[3] + iVar9;
        FUN_01329d10(auStack_98,*param_2,*(undefined4 *)((long)plVar12 + lVar13 + 0x84));
        local_a0 = 0x1a17051f157cf9b3;
        FUN_012b4250(auStack_88,auStack_98,&local_a0);
        iVar9 = FUN_012b4420(auStack_88,0);
        iVar9 = local_78[4] + iVar9;
        local_78[4] = iVar9;
        if (lVar13 == 0x24) break;
        lVar2 = lVar13 + 0x88;
        lVar13 = lVar13 + 4;
      } while (*(int *)((long)plVar12 + lVar2) != 0);
    }
    plVar11 = plVar11 + 6;
    iVar10 = iVar10 + 1;
    plVar12 = plVar12 + 6;
  } while( true );
}


