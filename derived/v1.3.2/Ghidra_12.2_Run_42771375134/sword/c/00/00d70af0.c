/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70af0; name: FUN_00d70af0
 */


void FUN_00d70af0(int *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  long lVar8;
  
  plVar3 = (long *)FUN_00cbd3c0();
  puVar7 = (ushort *)((long)param_1 - (long)*param_1);
  uVar1 = *puVar7;
  lVar4 = *plVar3;
  if (uVar1 < 0x1d) {
    if (lVar4 == 0) goto LAB_00d70b9c;
LAB_00d70b3c:
    if (((0x1c < uVar1) && ((ulong)puVar7[0xe] != 0)) &&
       (*(long *)((long)param_1 + (ulong)puVar7[0xe]) == -0x340d631b7bddd9bb)) goto LAB_00d70b9c;
    *param_2 = 8;
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0x1d) goto LAB_00d70dd4;
    uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xe];
    if (uVar5 == 0) {
      uVar6 = 0;
      goto LAB_00d70dd8;
    }
    goto LAB_00d70dcc;
  }
  lVar8 = 0;
  if ((ulong)puVar7[0xe] != 0) {
    lVar8 = *(long *)((long)param_1 + (ulong)puVar7[0xe]);
  }
  if (lVar8 != lVar4) goto LAB_00d70b3c;
LAB_00d70b9c:
  if (uVar1 < 0x1f) {
    if (lVar4 == 0) goto LAB_00d70bb8;
LAB_00d70c5c:
    *param_2 = 9;
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0x1f) {
LAB_00d70dd4:
      uVar6 = 0;
      goto LAB_00d70dd8;
    }
    uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xf];
    if (uVar5 == 0) {
      uVar6 = 0;
      goto LAB_00d70dd8;
    }
  }
  else {
    lVar8 = 0;
    if ((ulong)puVar7[0xf] != 0) {
      lVar8 = *(long *)((long)param_1 + (ulong)puVar7[0xf]);
    }
    if (lVar8 != lVar4) goto LAB_00d70c5c;
LAB_00d70bb8:
    if (uVar1 < 0x25) {
      if (lVar4 != 0) goto LAB_00d70c90;
    }
    else {
      lVar8 = 0;
      if ((ulong)puVar7[0x12] != 0) {
        lVar8 = *(long *)((long)param_1 + (ulong)puVar7[0x12]);
      }
      if (lVar8 != lVar4) {
LAB_00d70c90:
        *param_2 = 0xc;
        if (*(ushort *)((long)param_1 - (long)*param_1) < 0x25) goto LAB_00d70dd4;
        uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x12];
        if (uVar5 == 0) {
          uVar6 = 0;
          goto LAB_00d70dd8;
        }
        goto LAB_00d70dcc;
      }
    }
    if (uVar1 < 0x27) {
      if (lVar4 != 0) goto LAB_00d70cc4;
    }
    else {
      lVar8 = 0;
      if ((ulong)puVar7[0x13] != 0) {
        lVar8 = *(long *)((long)param_1 + (ulong)puVar7[0x13]);
      }
      if (lVar8 != lVar4) {
LAB_00d70cc4:
        *param_2 = 0xd;
        if (*(ushort *)((long)param_1 - (long)*param_1) < 0x27) goto LAB_00d70dd4;
        uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x13];
        if (uVar5 == 0) {
          uVar6 = 0;
          goto LAB_00d70dd8;
        }
        goto LAB_00d70dcc;
      }
    }
    if (uVar1 < 0x29) {
      if (lVar4 != 0) goto LAB_00d70cf8;
    }
    else {
      lVar8 = 0;
      if ((ulong)puVar7[0x14] != 0) {
        lVar8 = *(long *)((long)param_1 + (ulong)puVar7[0x14]);
      }
      if (lVar8 != lVar4) {
LAB_00d70cf8:
        *param_2 = 0xe;
        if (*(ushort *)((long)param_1 - (long)*param_1) < 0x29) goto LAB_00d70dd4;
        uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x14];
        if (uVar5 == 0) {
          uVar6 = 0;
          goto LAB_00d70dd8;
        }
        goto LAB_00d70dcc;
      }
    }
    if ((uVar1 < 0x23) || ((ulong)puVar7[0x11] == 0)) {
      bVar2 = lVar4 == 0;
    }
    else {
      bVar2 = *(long *)((long)param_1 + (ulong)puVar7[0x11]) == lVar4;
    }
    if (bVar2) {
      if ((uVar1 < 0x1b) || ((ulong)puVar7[0xd] == 0)) {
        bVar2 = lVar4 == 0;
      }
      else {
        bVar2 = *(long *)((long)param_1 + (ulong)puVar7[0xd]) == lVar4;
      }
      if (!bVar2) {
        *param_2 = 7;
        if (*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) goto LAB_00d70dd4;
        uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd];
        if (uVar5 == 0) {
          uVar6 = 0;
          goto LAB_00d70dd8;
        }
        goto LAB_00d70dcc;
      }
      if ((uVar1 < 0x17) || ((ulong)puVar7[0xb] == 0)) {
        if (lVar4 == 0) {
          return;
        }
      }
      else if (*(long *)((long)param_1 + (ulong)puVar7[0xb]) == lVar4) {
        return;
      }
      *param_2 = 6;
      if (0x16 < *(ushort *)((long)param_1 - (long)*param_1)) {
        uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb];
        uVar6 = 0;
        if (uVar5 == 0) goto LAB_00d70dd8;
        goto LAB_00d70dcc;
      }
      goto LAB_00d70dd4;
    }
    *param_2 = 0xb;
    if (*(ushort *)((long)param_1 - (long)*param_1) < 0x23) goto LAB_00d70dd4;
    uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x11];
    if (uVar5 == 0) {
      uVar6 = 0;
      goto LAB_00d70dd8;
    }
  }
LAB_00d70dcc:
  uVar6 = *(undefined8 *)((long)param_1 + uVar5);
LAB_00d70dd8:
  *param_3 = uVar6;
  return;
}


