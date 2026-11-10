/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004533e0; name: FUN_004533e0
 */


float FUN_004533e0(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  byte *pbVar6;
  float *pfVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_68 [52];
  float local_34;
  
  local_34 = 0.0;
  FUN_00452c80(param_1,&local_34,param_3,param_2);
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pbVar6 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18), pbVar6 != (byte *)0x0)) {
    uVar3 = 0;
    pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
    do {
      if ((uint)pbVar6[uVar3 + 1] == ((uint)param_3 & 0xff)) {
        if (pfVar7 != (float *)0x0) {
          local_34 = local_34 + *pfVar7;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      pfVar7 = pfVar7 + 4;
    } while (uVar3 < *pbVar6);
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    uVar1 = *(uint *)(plVar5 + 1);
    plVar5 = plVar4;
    if (uVar1 == 0) {
LAB_004534b4:
      if ((plVar5 != plVar4 + (ulong)uVar1 * 2) &&
         (pbVar6 = *(byte **)(plVar5[1] + 0x18), pbVar6 != (byte *)0x0)) {
        uVar3 = 0;
        pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
        do {
          if ((uint)pbVar6[uVar3 + 1] == ((uint)param_3 & 0xff)) {
            if (pfVar7 != (float *)0x0) {
              local_34 = local_34 + *pfVar7;
            }
            break;
          }
          uVar3 = uVar3 + 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar3 < *pbVar6);
      }
    }
    else {
      lVar8 = (ulong)uVar1 << 4;
      do {
        if (*plVar5 == *param_2) goto LAB_004534b4;
        lVar8 = lVar8 + -0x10;
        plVar5 = plVar5 + 2;
      } while (lVar8 != 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if ((((plVar5 != (long *)0x0) &&
       ((lVar8 = plVar5[0xc], lVar8 == 0 ||
        ((((*(int *)(lVar8 + 4) == 0 && (*(int *)(lVar8 + 0xc) == 0)) &&
          (*(int *)(lVar8 + 0x14) == 0)) && (*(int *)(lVar8 + 0x1c) == 0)))))) &&
      (((((iVar2 = (**(code **)(*plVar5 + 0x88))(plVar5), iVar2 != 10 &&
          (*(char *)((long)plVar5 + 0xcc) == '\0')) &&
         ((*(uint *)((long)plVar5 + 0x9c) & 0x1080000) == 0)) &&
        ((plVar5[0x10] != 0 && ((*(byte *)((long)plVar5 + 0x9a) & 0xe) == 0)))) &&
       ((plVar5[0x16] == 0 &&
        (((*(uint *)((long)plVar5 + 0x9c) >> 0x12 & 1) == 0 && (plVar5[0x11] == 0)))))))) &&
     (((ulong *)plVar5[7] == (ulong *)0x0 || ((*(ulong *)plVar5[7] & 0x380000000020) == 0)))) {
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    memcpy(auStack_68,param_2,0x30);
    fVar10 = (float)FUN_004533e0(uVar9,auStack_68,param_3 & 0xffffffff);
    local_34 = local_34 + fVar10;
  }
  return local_34;
}


