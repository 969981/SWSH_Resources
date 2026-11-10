/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb9d50; name: FUN_00eb9d50
 */


void FUN_00eb9d50(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar3 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar3);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dc6370(param_1,param_2,param_3,lVar4);
  puVar2 = PTR_DAT_02720268;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[9] = (long)(puVar2 + 0x1b0);
  param_1[10] = (long)(puVar2 + 0x1f0);
  *param_1 = (long)(puVar2 + 0x10);
  if ((*(char *)((long)param_1 + 0x641) == '\0') && (param_1[0xc9] == -0x340d631b7bddd9bb)) {
    param_1[0xc9] = *(long *)PTR_DAT_02720270;
  }
  lVar4 = param_1[0x74];
  param_1[0xce] = -0x340d631b7bddd9bb;
  if (lVar4 < -0x5273d6a8342b4811) {
    if (lVar4 < -0x781eb38e7843e18c) {
      if (lVar4 < -0x781eb68e7843e6a5) {
LAB_00eb9f20:
        if ((lVar4 != -0x781ebd8e7843f28a) && (lVar4 != -0x781eb78e7843e858)) goto LAB_00eba2f4;
      }
      else if ((lVar4 != -0x781eb68e7843e6a5) && (lVar4 != -0x781eb48e7843e33f)) goto LAB_00eba2f4;
    }
    else if (lVar4 < -0x781bad8e7841a183) {
      if ((lVar4 != -0x781eb38e7843e18c) && (lVar4 != -0x781eb28e7843dfd9)) goto LAB_00eba2f4;
    }
    else if (lVar4 != -0x781bad8e7841a183) {
LAB_00eb9e58:
      if (lVar4 == -0x6f78a08e735ec970) goto LAB_00eb9f9c;
      if (lVar4 != -0x6c57480cc601ea8e) goto LAB_00eba2f4;
    }
  }
  else if (lVar4 < 0x13c833c0546235f4) {
    if (-0x4ccd6cf7f8062b77 < lVar4) {
      if ((lVar4 != -0x4ccd6cf7f8062b76) && (lVar4 != -0x34cf16b9ea5a9218)) goto LAB_00eba2f4;
      goto LAB_00eba2ec;
    }
    if (lVar4 == -0x5273d6a8342b4811) goto LAB_00eba054;
    if (lVar4 != -0x525d43f45f48de9e) goto LAB_00eba2f4;
LAB_00eb9f9c:
    *(undefined1 *)((long)param_1 + 0x66d) = 1;
    if (lVar4 < -0x781eb28e7843dfd9) {
      if (lVar4 < -0x781eb68e7843e6a5) goto LAB_00eb9f20;
      if (lVar4 != -0x781eb68e7843e6a5) {
LAB_00eba158:
        if ((lVar4 != -0x781eb48e7843e33f) && (lVar4 != -0x781eb38e7843e18c)) goto LAB_00eba2f4;
      }
    }
    else if (lVar4 < -0x6c57480cc601ea8e) {
LAB_00eba1f0:
      if ((lVar4 != -0x781eb28e7843dfd9) && (lVar4 != -0x781bad8e7841a183)) goto LAB_00eba2f4;
    }
    else if ((lVar4 != -0x6c57480cc601ea8e) && (lVar4 != -0x34cf16b9ea5a9218)) {
LAB_00eba1d4:
      if (lVar4 != -0x4ccd6cf7f8062b76) goto LAB_00eba2f4;
    }
  }
  else if (lVar4 < 0x4bfdf9ff40ec6cfc) {
    if (lVar4 != 0x13c833c0546235f4) {
      if (lVar4 != 0x47676d7d804a24c0) goto LAB_00eba2f4;
      goto LAB_00eba054;
    }
  }
  else if ((lVar4 != 0x4bfdf9ff40ec6cfc) && (lVar4 != 0x4bfdfcff40ec7215)) {
    if (lVar4 != 0x55a36d97ee200b9d) goto LAB_00eba2f4;
LAB_00eba054:
    *(undefined1 *)((long)param_1 + 0x66c) = 1;
    if (lVar4 < -0x6f78a08e735ec970) {
      if (-0x781eb48e7843e340 < lVar4) {
        if (lVar4 < -0x781eb28e7843dfd9) goto LAB_00eba158;
        goto LAB_00eba1f0;
      }
      if (((lVar4 != -0x781ebd8e7843f28a) && (lVar4 != -0x781eb78e7843e858)) &&
         (lVar4 != -0x781eb68e7843e6a5)) goto LAB_00eba2f4;
    }
    else {
      if (lVar4 < -0x34cf16b9ea5a9218) {
        if (lVar4 < -0x525d43f45f48de9e) goto LAB_00eb9e58;
        if (lVar4 == -0x525d43f45f48de9e) goto LAB_00eb9f9c;
        goto LAB_00eba1d4;
      }
      if (lVar4 < 0x4bfdf9ff40ec6cfc) {
        if ((lVar4 != -0x34cf16b9ea5a9218) && (lVar4 != 0x13c833c0546235f4)) goto LAB_00eba2f4;
      }
      else if ((lVar4 != 0x4bfdf9ff40ec6cfc) && (lVar4 != 0x4bfdfcff40ec7215)) goto LAB_00eba2f4;
    }
  }
LAB_00eba2ec:
  *(undefined1 *)(param_1 + 0xcf) = 1;
LAB_00eba2f4:
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x2000000;
  return;
}


