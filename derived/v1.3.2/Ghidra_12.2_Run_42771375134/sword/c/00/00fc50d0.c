/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc50d0; name: FUN_00fc50d0
 */


void FUN_00fc50d0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong uVar7;
  char *__format;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  byte local_a0 [64];
  
  *(long *)(param_1 + 0x48) = *param_2;
  uVar3 = FUN_00fc6b70(param_2);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x60) = 0xcbf29ce484222645;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x78) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x88) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x90) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xa0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xa8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xb8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xc0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xd0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xd8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xe8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xf0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x100) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x108) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x118) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x120) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x130) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x138) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x148) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x150) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x160) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x168) = 0xcbf29ce484222645;
  puVar2 = PTR_DAT_027194d8;
  if (-1 < *(int *)(param_1 + 0x50)) {
    lVar4 = *param_2;
    if (lVar4 == 0x5742865396e549d0) {
      __format = "a_wr0101_nest_hole_emitter_%d";
    }
    else if (lVar4 == 0x5ea5c3539ab81c81) {
      __format = "a_wr0201_nest_hole_emitter_%d";
    }
    else {
      if (lVar4 != 0x674edc539f9f74a6) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      __format = "a_wr0301_nest_hole_emitter_%d";
    }
    uVar8 = 0;
    do {
      snprintf((char *)local_a0,0x40,__format,uVar8 & 0xffffffff);
      uVar10 = 0xcbf29ce484222645;
      if (local_a0[0] != 0) {
        uVar10 = 0xcbf29ce484222645;
        pbVar6 = (byte *)((ulong)local_a0 | 1);
        bVar1 = local_a0[0];
        do {
          uVar10 = (uVar10 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
      }
      *(ulong *)(param_1 + uVar8 * 0x18 + 0x58) = uVar10;
      plVar9 = *(long **)puVar2;
      if (uVar8 < 9) {
        lVar4 = FUN_00fc53d0(plVar9,*(undefined8 *)(param_1 + 0x178));
        *(ulong *)(lVar4 + 0x1a0) = uVar10;
      }
      else {
        lVar4 = FUN_00fc53d0(plVar9,*(undefined8 *)(param_1 + 0x180));
        *(ulong *)(lVar4 + 0x1a0) = uVar10;
        *(undefined1 *)(lVar4 + 0x628) = 1;
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,1);
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0xc);
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar10 = *(ulong *)(lVar4 + 0x3b8);
    uVar8 = *(ulong *)(param_1 + 0x48);
    if ((uVar10 - 1 & uVar10) == 0) {
      plVar9 = *(long **)(*(long *)(lVar4 + 0x3b0) + (uVar10 - 1 & uVar8) * 8);
      do {
        do {
          plVar9 = (long *)*plVar9;
        } while (uVar8 != plVar9[1]);
      } while (plVar9[2] != uVar8);
    }
    else {
      uVar7 = uVar8;
      if (uVar10 <= uVar8) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar8 / uVar10;
        }
        uVar7 = uVar8 - uVar7 * uVar10;
      }
      plVar9 = *(long **)(*(long *)(lVar4 + 0x3b0) + uVar7 * 8);
      do {
        do {
          plVar9 = (long *)*plVar9;
        } while (uVar8 != plVar9[1]);
      } while (plVar9[2] != uVar8);
    }
    puVar5 = *(uint **)(*(long *)((long)plVar9 + 0x38) + 400);
    *(ulong *)(param_1 + 400) = (long)puVar5 + (ulong)*puVar5;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fc5388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      return;
    }
  }
  return;
}


