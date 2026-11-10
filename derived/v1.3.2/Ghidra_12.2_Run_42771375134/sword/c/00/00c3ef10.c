/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3ef10; name: FUN_00c3ef10
 */


void FUN_00c3ef10(undefined1 *param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  plVar3 = *(long **)(param_2 + 8);
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 2) {
      if (*(ushort *)((long)plVar4 + 0x1c) != 0) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3ef84;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3efd4:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 3) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 2) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f00c;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f060:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 4) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 3) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f098;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f0ec:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 5) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 4) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f124;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f178:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 6) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 5) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f1b0;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f204:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 7) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 6) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f23c;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f290:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 8) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 7) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f2c8;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f31c:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 9) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 8) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f354;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f3a8:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 10) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 9) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f3e0;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f434:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 0xb) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 10) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f46c;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f4c0:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 0xc) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 0xb) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f4f8;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f54c:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 0xd) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 0xc) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f584;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f5d8:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 0xe) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 0xd) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        plVar2 = plVar3;
        goto joined_r0x00c3f610;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
LAB_00c3f66c:
  plVar4 = plVar3;
  do {
    if (*(ushort *)((long)plVar4 + 0x1c) < 0xf) {
      if (*(ushort *)((long)plVar4 + 0x1c) == 0xe) {
        plVar4 = (long *)(param_2 + 8);
        uVar1 = *(ushort *)((long)plVar3 + 0x1c);
        goto joined_r0x00c3f6a0;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
  } while( true );
joined_r0x00c3ef84:
  if (uVar1 < 2) {
    if (uVar1 != 0) goto LAB_00c3efc0;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3efc0;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3ef84;
LAB_00c3efc0:
  *(short *)(param_1 + 2) = (short)*(undefined4 *)(*plVar4 + 0x20);
  *param_1 = 1;
  goto LAB_00c3efd4;
joined_r0x00c3f00c:
  if (uVar1 < 3) {
    if (uVar1 == 2) goto LAB_00c3f04c;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f04c;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f00c;
LAB_00c3f04c:
  *(short *)(param_1 + 6) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[4] = 1;
  goto LAB_00c3f060;
joined_r0x00c3f098:
  if (uVar1 < 4) {
    if (uVar1 == 3) goto LAB_00c3f0d8;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f0d8;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f098;
LAB_00c3f0d8:
  *(short *)(param_1 + 10) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[8] = 1;
  goto LAB_00c3f0ec;
joined_r0x00c3f124:
  if (uVar1 < 5) {
    if (uVar1 == 4) goto LAB_00c3f164;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f164;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f124;
LAB_00c3f164:
  *(short *)(param_1 + 0xe) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0xc] = 1;
  goto LAB_00c3f178;
joined_r0x00c3f1b0:
  if (uVar1 < 6) {
    if (uVar1 == 5) goto LAB_00c3f1f0;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f1f0;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f1b0;
LAB_00c3f1f0:
  *(short *)(param_1 + 0x12) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x10] = 1;
  goto LAB_00c3f204;
joined_r0x00c3f23c:
  if (uVar1 < 7) {
    if (uVar1 == 6) goto LAB_00c3f27c;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f27c;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f23c;
LAB_00c3f27c:
  *(short *)(param_1 + 0x16) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x14] = 1;
  goto LAB_00c3f290;
joined_r0x00c3f2c8:
  if (uVar1 < 8) {
    if (uVar1 == 7) goto LAB_00c3f308;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f308;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f2c8;
LAB_00c3f308:
  *(short *)(param_1 + 0x1a) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x18] = 1;
  goto LAB_00c3f31c;
joined_r0x00c3f354:
  if (uVar1 < 9) {
    if (uVar1 == 8) goto LAB_00c3f394;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f394;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f354;
LAB_00c3f394:
  *(short *)(param_1 + 0x1e) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x1c] = 1;
  goto LAB_00c3f3a8;
joined_r0x00c3f3e0:
  if (uVar1 < 10) {
    if (uVar1 == 9) goto LAB_00c3f420;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f420;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f3e0;
LAB_00c3f420:
  *(short *)(param_1 + 0x22) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x20] = 1;
  goto LAB_00c3f434;
joined_r0x00c3f46c:
  if (uVar1 < 0xb) {
    if (uVar1 == 10) goto LAB_00c3f4ac;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f4ac;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f46c;
LAB_00c3f4ac:
  *(short *)(param_1 + 0x26) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x24] = 1;
  goto LAB_00c3f4c0;
joined_r0x00c3f4f8:
  if (uVar1 < 0xc) {
    if (uVar1 == 0xb) goto LAB_00c3f538;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f538;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f4f8;
LAB_00c3f538:
  *(short *)(param_1 + 0x2a) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x28] = 1;
  goto LAB_00c3f54c;
joined_r0x00c3f584:
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) goto LAB_00c3f5c4;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f5c4;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f584;
LAB_00c3f5c4:
  *(short *)(param_1 + 0x2e) = (short)*(undefined4 *)(*plVar4 + 0x20);
  param_1[0x2c] = 1;
  goto LAB_00c3f5d8;
joined_r0x00c3f610:
  if (uVar1 < 0xe) {
    if (uVar1 == 0xd) goto LAB_00c3f650;
    plVar4 = plVar2 + 1;
    plVar2 = (long *)plVar2[1];
  }
  else {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) goto LAB_00c3f650;
  uVar1 = *(ushort *)((long)plVar2 + 0x1c);
  goto joined_r0x00c3f610;
LAB_00c3f650:
  param_1[0x31] = *(short *)(*plVar4 + 0x20) == 0;
  param_1[0x30] = 1;
  goto LAB_00c3f66c;
joined_r0x00c3f6a0:
  if (uVar1 < 0xf) {
    if (uVar1 == 0xe) {
LAB_00c3f6e0:
      param_1[0x33] = *(short *)(*plVar4 + 0x20) == 0;
      param_1[0x32] = 1;
      return;
    }
    plVar4 = plVar3 + 1;
    plVar3 = (long *)plVar3[1];
  }
  else {
    plVar4 = plVar3;
    plVar3 = (long *)*plVar3;
  }
  if (plVar3 == (long *)0x0) goto LAB_00c3f6e0;
  uVar1 = *(ushort *)((long)plVar3 + 0x1c);
  goto joined_r0x00c3f6a0;
}


