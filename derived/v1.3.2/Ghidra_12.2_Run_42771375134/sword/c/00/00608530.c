/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608530; name: FUN_00608530
 */


int FUN_00608530(ulong *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte *__src;
  ushort *puVar6;
  ulong uVar7;
  byte *pbVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == (ulong *)0x0) {
    return 0x28;
  }
  puVar13 = param_1 + 8;
  bVar5 = false;
  bVar3 = *param_2;
  __src = (byte *)*puVar13;
  puVar6 = (ushort *)(param_2 + 2);
code_r0x00608584:
  switch(bVar3) {
  case 4:
    uVar10 = (ulong)*puVar6;
    pcVar9 = (code *)param_1[5];
    if (pcVar9 != (code *)0x0) {
      if (uVar10 <= param_1[1]) {
        uVar11 = param_1[7];
        if (*puVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(uVar11 + 8))(uVar11,uVar10);
          if (uVar7 == 0) {
            iVar12 = 0x40;
            *param_1 = 0;
            goto joined_r0x00608854;
          }
          pcVar9 = (code *)param_1[5];
        }
        *param_1 = uVar7;
        uVar7 = (*pcVar9)(param_1,param_1[2],uVar7,uVar10);
        pbVar8 = (byte *)*param_1;
        if (uVar7 < uVar10) {
          if (pbVar8 != (byte *)0x0) {
            (**(code **)(uVar11 + 0x10))(uVar11,pbVar8);
          }
          pbVar8 = (byte *)0x0;
          iVar12 = 0x55;
          *param_1 = 0;
        }
        else {
          iVar12 = 0;
        }
        param_1[8] = (ulong)pbVar8;
        param_1[9] = (ulong)(pbVar8 + uVar10);
        param_1[2] = param_1[2] + uVar7;
        if (iVar12 == 0) {
          bVar5 = true;
          goto LAB_006087bc;
        }
        goto joined_r0x00608854;
      }
LAB_00608838:
      iVar12 = 0x55;
      goto joined_r0x00608854;
    }
    uVar11 = param_1[2];
    if (param_1[1] <= uVar11) goto LAB_00608838;
    iVar12 = 0x55;
    if (param_1[1] - uVar11 < uVar10) goto joined_r0x00608854;
    pbVar8 = (byte *)(*param_1 + uVar11);
    param_1[8] = (ulong)pbVar8;
    param_1[9] = (ulong)(pbVar8 + uVar10);
    param_1[2] = uVar11 + uVar10;
    bVar5 = true;
    goto LAB_006087bc;
  default:
    goto switchD_00608590_caseD_5;
  case 8:
  case 9:
    pbVar8 = __src + 1;
    uVar10 = (ulong)*__src;
    iVar12 = 0x18;
    break;
  case 0xc:
  case 0xd:
    bVar2 = *__src;
    bVar1 = __src[1];
    goto LAB_006085b8;
  case 0xe:
  case 0xf:
    bVar2 = __src[1];
    bVar1 = *__src;
LAB_006085b8:
    pbVar8 = __src + 2;
    uVar10 = (ulong)CONCAT11(bVar2,bVar1);
    iVar12 = 0x10;
    break;
  case 0x10:
  case 0x11:
    iVar12 = 0;
    pbVar8 = __src + 4;
    uVar10 = (ulong)*__src << 0x18 | (ulong)__src[1] << 0x10 | (ulong)__src[2] << 8 |
             (ulong)__src[3];
    break;
  case 0x12:
  case 0x13:
    iVar12 = 0;
    pbVar8 = __src + 4;
    uVar10 = (ulong)__src[3] << 0x18 | (ulong)__src[2] << 0x10 | (ulong)__src[1] << 8 |
             (ulong)*__src;
    break;
  case 0x14:
  case 0x15:
    uVar10 = (ulong)*__src << 0x10 | (ulong)__src[1] << 8;
    bVar2 = __src[2];
    goto LAB_0060864c;
  case 0x16:
  case 0x17:
    uVar10 = (ulong)__src[2] << 0x10 | (ulong)__src[1] << 8;
    bVar2 = *__src;
LAB_0060864c:
    pbVar8 = __src + 3;
    uVar10 = uVar10 | bVar2;
    iVar12 = 8;
    break;
  case 0x18:
  case 0x19:
    pbVar8 = __src + *(byte *)((long)puVar6 + -1);
    if ((byte *)param_1[9] < pbVar8) goto LAB_00608838;
    if (bVar3 == 0x18) {
      memcpy((void *)(param_3 + (ulong)*puVar6),__src,(ulong)*(byte *)((long)puVar6 + -1));
    }
    goto LAB_006087bc;
  }
  if ((bVar3 & 1) != 0) {
    uVar10 = (long)(((int)uVar10 << iVar12) >> iVar12);
  }
  cVar4 = *(char *)((long)puVar6 + -1);
  uVar11 = (ulong)*puVar6;
  if (cVar4 == '\x04') {
    *(int *)(param_3 + uVar11) = (int)uVar10;
  }
  else if (cVar4 == '\x02') {
    *(short *)(param_3 + uVar11) = (short)uVar10;
  }
  else if (cVar4 == '\x01') {
    *(char *)(param_3 + uVar11) = (char)uVar10;
  }
  else {
    *(ulong *)(param_3 + uVar11) = uVar10;
  }
LAB_006087bc:
  bVar3 = (byte)puVar6[1];
  __src = pbVar8;
  puVar6 = puVar6 + 2;
  goto code_r0x00608584;
switchD_00608590_caseD_5:
  iVar12 = 0;
  *puVar13 = (ulong)__src;
joined_r0x00608854:
  if (bVar5) {
    if (param_1[5] != 0) {
      if (*param_1 != 0) {
        (**(code **)(param_1[7] + 0x10))();
      }
      *param_1 = 0;
    }
    *puVar13 = 0;
    param_1[9] = 0;
  }
  return iVar12;
}


