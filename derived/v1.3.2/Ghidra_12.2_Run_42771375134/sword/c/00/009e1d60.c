/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1d60; name: FUN_009e1d60
 */


void FUN_009e1d60(undefined8 *param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  psVar8 = (short *)FUN_0077d470(*param_1);
  sVar2 = *psVar8;
  while( true ) {
    while (sVar2 == 0x10) {
      uVar9 = FUN_014bf030(psVar8);
      if ((uVar9 & 1) != 0) {
        uVar6 = thunk_FUN_0077dba0(psVar8,0);
        cVar4 = FUN_014bf260(psVar8);
        if ((cVar4 == '\x01') &&
           ((cVar4 = FUN_014bed40(psVar8), cVar4 == -0x62 || (cVar4 == '\x0e')))) {
          uVar6 = uVar6 & 0xffff;
          if (uVar6 + 1 < 0x14) {
            lVar10 = (ulong)uVar6 + 1;
            uVar1 = 3 - uVar6 & 3;
            if (uVar1 != 0) {
              lVar14 = -(ulong)uVar1;
              do {
                *(char *)((long)&local_78 + lVar10) = *(char *)((long)&local_78 + lVar10) + '\x01';
                lVar10 = lVar10 + 1;
                lVar14 = lVar14 + 1;
              } while (lVar14 != 0);
            }
            if (2 < 0x12 - (ulong)uVar6) {
              do {
                lVar14 = lVar10 + 4;
                *(char *)((long)&local_78 + lVar10) = *(char *)((long)&local_78 + lVar10) + '\x01';
                *(char *)((long)&local_78 + lVar10 + 1) =
                     *(char *)((long)&local_78 + lVar10 + 1) + '\x01';
                *(char *)((long)&local_78 + lVar10 + 2) =
                     *(char *)((long)&local_78 + lVar10 + 2) + '\x01';
                *(char *)((long)&local_78 + lVar10 + 3) =
                     *(char *)((long)&local_78 + lVar10 + 3) + '\x01';
                lVar10 = lVar14;
              } while (lVar14 != 0x14);
            }
          }
        }
      }
      psVar8 = (short *)FUN_0077db30(psVar8);
      sVar2 = *psVar8;
    }
    if (sVar2 == 0) break;
    psVar8 = psVar8 + 1;
    sVar2 = *psVar8;
  }
  psVar8 = (short *)FUN_0077d470(*param_1);
  puVar3 = PTR_DAT_02718ad8;
  sVar2 = *psVar8;
  do {
    while (sVar2 != 0x10) {
      if (sVar2 == 0) {
        return;
      }
      psVar8 = psVar8 + 1;
      sVar2 = *psVar8;
    }
    uVar9 = FUN_014bf030(psVar8);
    if ((uVar9 & 1) == 0) goto switchD_009e1fb0_caseD_4;
    uVar9 = thunk_FUN_0077dba0(psVar8,0);
    uVar6 = (uint)uVar9 & 0xffff;
    cVar4 = FUN_014bf260(psVar8);
    uVar13 = (uint)*(byte *)((long)&local_78 + (uVar9 & 0xffff));
    uVar1 = 0;
    if (uVar13 <= uVar6) {
      uVar1 = uVar13;
    }
    uVar1 = uVar6 - uVar1;
    cVar5 = FUN_014bed40(psVar8);
    if (cVar4 == '\x02') {
      FUN_014ca220(*(undefined8 *)(puVar3 + 0x10),uVar6,*(undefined4 *)(param_2 + (ulong)uVar1 * 4),
                   cVar5 + '\x01',0,1);
      goto switchD_009e1fb0_caseD_4;
    }
    switch(cVar5) {
    case '\0':
      if (uVar6 < 10) {
        uVar7 = *(undefined4 *)(param_2 + (ulong)uVar1 * 4);
      }
      else {
        uVar7 = FUN_008f94e0(*(undefined4 *)(param_2 + (ulong)(uVar6 % 10) * 4));
      }
      FUN_009e1420(uVar6,uVar7);
      break;
    case '\x01':
      FUN_009e1200(*(undefined4 *)(param_2 + (ulong)uVar1 * 4),uVar6);
      break;
    case '\x02':
      uVar7 = *(undefined4 *)(param_2 + (ulong)uVar1 * 4);
      lVar10 = *(long *)(puVar3 + 8);
      if (*(short *)(puVar3 + 0xa6) != 0) goto LAB_009e20b4;
      if (lVar10 == 0) break;
      FUN_008df430();
      goto LAB_009e20b8;
    case '\x03':
    case '\x0f':
      FUN_014c9270(*(undefined8 *)(puVar3 + 0x10),uVar6,*(undefined4 *)(param_2 + (ulong)uVar1 * 4))
      ;
      break;
    case '\x04':
    case '\x05':
    case '\b':
    case '\r':
      break;
    case '\x06':
      FUN_014c93c0(*(undefined8 *)(puVar3 + 0x10),uVar6,*(undefined4 *)(param_2 + (ulong)uVar1 * 4))
      ;
      break;
    case '\a':
      FUN_014c9660(*(undefined8 *)(puVar3 + 0x10),uVar6,*(undefined4 *)(param_2 + (ulong)uVar1 * 4))
      ;
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\x10':
      FUN_014c9900(*(undefined8 *)(puVar3 + 0x10),uVar6,*(undefined4 *)(param_2 + (ulong)uVar1 * 4),
                   1);
      break;
    case '\f':
      uVar7 = *(undefined4 *)(param_2 + (ulong)uVar1 * 4);
      lVar10 = *(long *)(puVar3 + 8);
LAB_009e20b4:
      FUN_008df3f0(lVar10,uVar7);
LAB_009e20b8:
      uVar11 = FUN_008e1680();
      uVar12 = *(undefined8 *)(puVar3 + 0x10);
LAB_009e20c4:
      FUN_014c7bf0(uVar12,uVar6,uVar11);
      break;
    case '\x0e':
      FUN_009e1350(uVar6,*(undefined4 *)(param_2 + (ulong)uVar1 * 4));
      break;
    default:
      if (cVar5 != -0x2f) {
        if ((cVar5 == -0x62) && (uVar1 = *(uint *)(param_2 + (ulong)uVar1 * 4), (uVar1 & 0xff) != 5)
           ) {
          FUN_009e1350(uVar6,uVar1);
          FUN_009e1420(uVar6 + 1,uVar1);
          uVar1 = (uint)uVar9 & 0xff;
          FUN_014c8a90(*(undefined8 *)(puVar3 + 0x10),uVar1,uVar1,uVar6 + 1 & 0xff);
        }
        break;
      }
      uVar7 = *(undefined4 *)(param_2 + (ulong)uVar1 * 4);
      if (*(short *)(puVar3 + 0xa6) == 0) {
        FUN_009e1160(uVar7,uVar6);
        break;
      }
      uVar9 = FUN_008f35c0(*(undefined8 *)puVar3,0x200000);
      FUN_008df3f0(*(undefined8 *)(puVar3 + 8),uVar7);
      uVar11 = FUN_008e1680();
      uVar12 = *(undefined8 *)(puVar3 + 0x10);
      if ((uVar9 & 1) == 0) {
        FUN_014c7b70(uVar12,uVar6,uVar11);
        break;
      }
      goto LAB_009e20c4;
    }
switchD_009e1fb0_caseD_4:
    psVar8 = (short *)FUN_0077db30(psVar8);
    sVar2 = *psVar8;
  } while( true );
}


