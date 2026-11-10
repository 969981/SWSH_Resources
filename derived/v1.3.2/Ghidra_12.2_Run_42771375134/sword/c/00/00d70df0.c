/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70df0; name: FUN_00d70df0
 */


byte FUN_00d70df0(int *param_1,void *param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined1 auStack_e0 [56];
  long local_a8;
  long local_a0;
  long local_98;
  long local_80;
  
  lVar6 = (long)*param_1;
  puVar4 = (ushort *)((long)param_1 - lVar6);
  lVar8 = 0;
  if (*puVar4 < 0x1f) {
LAB_00d70e8c:
    lVar6 = *(long *)((long)param_2 + 0x50);
    plVar3 = (long *)FUN_00cbd3c0();
    bVar2 = lVar6 == lVar8 || *plVar3 == lVar8;
    lVar6 = (long)*param_1;
    if (*(ushort *)((long)param_1 - lVar6) < 0x1d) goto LAB_00d70ec4;
LAB_00d70e68:
    uVar5 = (ulong)*(ushort *)((long)param_1 + (0x1c - lVar6));
    if (uVar5 == 0) goto LAB_00d70ec4;
    lVar6 = *(long *)((long)param_1 + uVar5);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d70ec8;
    bVar1 = true;
  }
  else {
    if ((ulong)puVar4[0xf] == 0) {
      lVar8 = 0;
      goto LAB_00d70e8c;
    }
    lVar8 = *(long *)((long)param_1 + (ulong)puVar4[0xf]);
    if (lVar8 != -0x340d631b7bddd9bb) goto LAB_00d70e8c;
    bVar2 = true;
    if (0x1c < *puVar4) goto LAB_00d70e68;
LAB_00d70ec4:
    lVar6 = 0;
LAB_00d70ec8:
    lVar8 = *(long *)((long)param_2 + 0x48);
    plVar3 = (long *)FUN_00cbd3c0();
    if (*plVar3 == lVar6) {
      memcpy(auStack_e0,param_2,0x90);
      FUN_00cc1760(auStack_e0,8);
      lVar6 = local_98;
    }
    bVar1 = lVar8 == lVar6;
  }
  bVar7 = bVar2 & bVar1;
  puVar4 = (ushort *)((long)param_1 - (long)*param_1);
  if ((*puVar4 < 0x25) || ((ulong)puVar4[0x12] == 0)) {
    lVar6 = 0;
LAB_00d70fe4:
    lVar8 = *(long *)((long)param_2 + 0x68);
    plVar3 = (long *)FUN_00cbd3c0();
    puVar4 = (ushort *)((long)param_1 - (long)*param_1);
    bVar7 = bVar7 & (lVar8 == lVar6 || *plVar3 == lVar6);
    if (*puVar4 < 0x27) goto LAB_00d7101c;
LAB_00d70f4c:
    if ((ulong)puVar4[0x13] == 0) goto LAB_00d7101c;
    lVar6 = *(long *)((long)param_1 + (ulong)puVar4[0x13]);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d71020;
    if (0x28 < *puVar4) goto LAB_00d70f74;
LAB_00d71058:
    lVar6 = 0;
LAB_00d7105c:
    lVar8 = *(long *)((long)param_2 + 0x78);
    plVar3 = (long *)FUN_00cbd3c0();
    puVar4 = (ushort *)((long)param_1 - (long)*param_1);
    bVar7 = bVar7 & (lVar8 == lVar6 || *plVar3 == lVar6);
    if (*puVar4 < 0x21) goto LAB_00d71094;
LAB_00d70f9c:
    if ((ulong)puVar4[0x10] == 0) goto LAB_00d71094;
    lVar6 = *(long *)((long)param_1 + (ulong)puVar4[0x10]);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d71098;
    if (0x16 < *puVar4) goto LAB_00d70fc4;
LAB_00d710d0:
    lVar6 = 0;
LAB_00d710d4:
    lVar8 = *(long *)((long)param_2 + 0x38);
    plVar3 = (long *)FUN_00cbd3c0();
    if (*plVar3 == lVar6) {
      memcpy(auStack_e0,param_2,0x90);
      FUN_00cc1760(auStack_e0,6);
      lVar6 = local_a8;
    }
    bVar2 = lVar8 == lVar6;
  }
  else {
    lVar6 = *(long *)((long)param_1 + (ulong)puVar4[0x12]);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d70fe4;
    if (0x26 < *puVar4) goto LAB_00d70f4c;
LAB_00d7101c:
    lVar6 = 0;
LAB_00d71020:
    lVar8 = *(long *)((long)param_2 + 0x70);
    plVar3 = (long *)FUN_00cbd3c0();
    puVar4 = (ushort *)((long)param_1 - (long)*param_1);
    bVar7 = bVar7 & (lVar8 == lVar6 || *plVar3 == lVar6);
    if (*puVar4 < 0x29) goto LAB_00d71058;
LAB_00d70f74:
    if ((ulong)puVar4[0x14] == 0) goto LAB_00d71058;
    lVar6 = *(long *)((long)param_1 + (ulong)puVar4[0x14]);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d7105c;
    if (0x20 < *puVar4) goto LAB_00d70f9c;
LAB_00d71094:
    lVar6 = 0;
LAB_00d71098:
    lVar8 = *(long *)((long)param_2 + 0x58);
    plVar3 = (long *)FUN_00cbd3c0();
    puVar4 = (ushort *)((long)param_1 - (long)*param_1);
    bVar7 = bVar7 & (lVar8 == lVar6 || *plVar3 == lVar6);
    if (*puVar4 < 0x17) goto LAB_00d710d0;
LAB_00d70fc4:
    if ((ulong)puVar4[0xb] == 0) goto LAB_00d710d0;
    lVar6 = *(long *)((long)param_1 + (ulong)puVar4[0xb]);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d710d4;
    bVar2 = true;
  }
  bVar7 = bVar7 & bVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x23) ||
     (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x11], uVar5 == 0)) {
    lVar6 = 0;
LAB_00d71158:
    lVar8 = *(long *)((long)param_2 + 0x60);
    plVar3 = (long *)FUN_00cbd3c0();
    if (*plVar3 == lVar6) {
      memcpy(auStack_e0,param_2,0x90);
      FUN_00cc1760(auStack_e0,0xb);
      bVar7 = bVar7 & lVar8 == local_80;
    }
    else {
      bVar7 = bVar7 & lVar8 == lVar6;
    }
  }
  else {
    lVar6 = *(long *)((long)param_1 + uVar5);
    if (lVar6 != -0x340d631b7bddd9bb) goto LAB_00d71158;
  }
  if ((param_3 & 1) == 0) {
    return bVar7;
  }
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) ||
     (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd], uVar5 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)((long)param_1 + uVar5);
    if (lVar6 == -0x340d631b7bddd9bb) {
      bVar2 = true;
      goto LAB_00d71228;
    }
  }
  lVar8 = *(long *)((long)param_2 + 0x40);
  plVar3 = (long *)FUN_00cbd3c0();
  if (*plVar3 == lVar6) {
    memcpy(auStack_e0,param_2,0x90);
    FUN_00cc1760(auStack_e0,7);
    lVar6 = local_a0;
  }
  bVar2 = lVar8 == lVar6;
LAB_00d71228:
  return bVar7 & bVar2;
}


