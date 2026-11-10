/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063b800; name: FUN_0063b800
 */


undefined8 FUN_0063b800(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x3e08);
  uVar4 = (ulong)iVar8;
  plVar5 = *(long **)(param_1 + 8);
  if (*(ulong *)(param_1 + 0x3e20) != uVar4) {
    if ((uVar4 < *(ulong *)(param_1 + 0x3e28)) ||
       (uVar2 = FUN_00642f30(param_1 + 0x3e10,uVar4,1), (uVar2 & 1) != 0)) {
      *(ulong *)(param_1 + 0x3e20) = uVar4;
      if (iVar8 == 0) goto LAB_0063b87c;
      *(long *)(param_1 + 0x3e40) = *(long *)(param_1 + 0x3e38);
      *(ulong *)(param_1 + 0x3e48) = *(long *)(param_1 + 0x3e38) + uVar4 * 0x60;
    }
    else {
      *(undefined8 *)(param_1 + 0x3e20) = 0;
LAB_0063b87c:
      *(undefined8 *)(param_1 + 0x3e48) = 0;
      *(undefined8 *)(param_1 + 0x3e40) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x3e08);
  }
  if (0 < iVar8) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3e38) + lVar6);
      plVar3 = (long *)puVar1[3];
      *puVar1 = plVar5;
      if (plVar3 != plVar5) {
        if (((*(byte *)(puVar1 + 0xb) & 1) == 0) && (puVar1[7] != 0)) {
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,puVar1[7],"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          puVar1[7] = 0;
        }
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[3] = plVar5;
        puVar1[0xb] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
      }
      iVar8 = *(int *)(param_1 + 0x3e08);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar7 < iVar8);
  }
  uVar4 = (ulong)iVar8;
  if (*(ulong *)(param_1 + 0x3e70) == uVar4) {
LAB_0063b960:
    iVar8 = *(int *)(param_1 + 0x3e08);
  }
  else {
    if ((uVar4 < *(ulong *)(param_1 + 0x3e78)) ||
       (uVar2 = FUN_00642f30(param_1 + 0x3e60,uVar4,1), (uVar2 & 1) != 0)) {
      *(ulong *)(param_1 + 0x3e70) = uVar4;
      if (iVar8 != 0) {
        *(long *)(param_1 + 0x3e90) = *(long *)(param_1 + 0x3e88);
        *(ulong *)(param_1 + 0x3e98) = *(long *)(param_1 + 0x3e88) + uVar4 * 0x60;
        goto LAB_0063b960;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x3e70) = 0;
    }
    *(undefined8 *)(param_1 + 0x3e98) = 0;
    *(undefined8 *)(param_1 + 0x3e90) = 0;
    iVar8 = *(int *)(param_1 + 0x3e08);
  }
  if (0 < iVar8) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3e88) + lVar6);
      plVar3 = (long *)puVar1[3];
      *puVar1 = plVar5;
      if (plVar3 != plVar5) {
        if (((*(byte *)(puVar1 + 0xb) & 1) == 0) && (puVar1[7] != 0)) {
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,puVar1[7],"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          puVar1[7] = 0;
        }
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[3] = plVar5;
        puVar1[0xb] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
      }
      iVar8 = *(int *)(param_1 + 0x3e08);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar7 < iVar8);
  }
  uVar4 = (ulong)iVar8;
  if (*(ulong *)(param_1 + 0x3ec0) == uVar4) {
LAB_0063ba3c:
    iVar8 = *(int *)(param_1 + 0x3e08);
  }
  else {
    if ((uVar4 < *(ulong *)(param_1 + 0x3ec8)) ||
       (uVar2 = FUN_00642f30(param_1 + 0x3eb0,uVar4,1), (uVar2 & 1) != 0)) {
      *(ulong *)(param_1 + 0x3ec0) = uVar4;
      if (iVar8 != 0) {
        *(long *)(param_1 + 0x3ee0) = *(long *)(param_1 + 0x3ed8);
        *(ulong *)(param_1 + 0x3ee8) = *(long *)(param_1 + 0x3ed8) + uVar4 * 0x60;
        goto LAB_0063ba3c;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x3ec0) = 0;
    }
    *(undefined8 *)(param_1 + 0x3ee8) = 0;
    *(undefined8 *)(param_1 + 0x3ee0) = 0;
    iVar8 = *(int *)(param_1 + 0x3e08);
  }
  if (0 < iVar8) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3ed8) + lVar6);
      plVar3 = (long *)puVar1[3];
      *puVar1 = plVar5;
      if (plVar3 != plVar5) {
        if (((*(byte *)(puVar1 + 0xb) & 1) == 0) && (puVar1[7] != 0)) {
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,puVar1[7],"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          puVar1[7] = 0;
        }
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[3] = plVar5;
        puVar1[0xb] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar7 < *(int *)(param_1 + 0x3e08));
  }
  return 1;
}


