/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01144580; name: FUN_01144580
 */


void FUN_01144580(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long local_80 [3];
  long local_68;
  
  if (*param_2 == 0) {
    lVar7 = 0;
  }
  else {
    FUN_011303e0(local_80);
    lVar7 = local_80[0];
    if (local_80[0] == 0) goto LAB_011445d8;
    (**(code **)(*(long *)(local_80[0] + 0x50) + 0x18))();
  }
  local_80[0] = 0;
LAB_011445d8:
  plVar6 = *(long **)(lVar7 + 0x430);
  if ((plVar6 != (long *)0x0) && (plVar8 = (long *)*plVar6, plVar8 != (long *)plVar6[1])) {
    do {
      if ((*plVar8 != 0) && (bVar2 = FUN_007b5850(), bVar2 < 4)) {
        lVar9 = param_1 + (ulong)bVar2 * 0x30;
        FUN_0077d520(*(undefined8 *)(lVar9 + 0x160),(long)plVar8 + 0xc);
        *(short *)(lVar9 + 0x168) = (short)plVar8[1];
        *(undefined1 *)(lVar9 + 0x188) = *(undefined1 *)((long)plVar8 + 0x26);
        *(undefined1 *)(lVar9 + 0x189) = *(undefined1 *)((long)plVar8 + 0x27);
      }
      plVar8 = plVar8 + 5;
    } while (plVar8 != (long *)plVar6[1]);
  }
  plVar6 = *(long **)(lVar7 + 0x450);
  if ((plVar6 != (long *)0x0) && (plVar8 = (long *)*plVar6, plVar8 != (long *)plVar6[1])) {
    do {
      if ((*plVar8 != 0) && (bVar2 = FUN_007b5850(), bVar2 < 4)) {
        lVar1 = plVar8[1];
        lVar9 = param_1 + (ulong)bVar2;
        if (*(char *)(lVar9 + 0x232) == '\0' && (int)lVar1 != 0) {
          lVar5 = *(long *)PTR_DAT_027107a8;
          local_88 = 0x13;
          local_98 = 0xbda5c5b45898219a;
          pcStack_90 = "Play_UI_Gnest_ready";
          FUN_006cf0a0(local_80,&local_98);
          FUN_008962c0(lVar5 + 0x108,local_80);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          *(undefined1 *)(lVar9 + 0x232) = 1;
        }
        *(bool *)(param_1 + (ulong)bVar2 * 0x30 + 0x18a) = (int)lVar1 != 0;
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != (long *)plVar6[1]);
  }
  plVar6 = *(long **)(lVar7 + 0x470);
  if ((plVar6 != (long *)0x0) && (plVar8 = (long *)*plVar6, plVar8 != (long *)plVar6[1])) {
    do {
      if ((*plVar8 != 0) && (bVar2 = FUN_007b5850(), bVar2 < 4)) {
        FUN_008664b0(*(undefined8 *)(param_1 + 0x220),plVar8 + 1);
        uVar4 = FUN_008783b0(*(undefined8 *)(param_1 + 0x220));
        lVar7 = param_1 + (ulong)bVar2 * 0x30;
        *(undefined4 *)(lVar7 + 0x16c) = uVar4;
        uVar3 = FUN_008783c0(*(undefined8 *)(param_1 + 0x220));
        *(undefined2 *)(lVar7 + 0x170) = uVar3;
        uVar4 = FUN_0087ccf0(*(undefined8 *)(param_1 + 0x220));
        *(undefined4 *)(lVar7 + 0x174) = uVar4;
        bVar2 = FUN_0087ea90(*(undefined8 *)(param_1 + 0x220));
        *(byte *)(lVar7 + 0x178) = bVar2 & 1;
        bVar2 = FUN_0087d610(*(undefined8 *)(param_1 + 0x220),2);
        *(byte *)(lVar7 + 0x179) = bVar2 & 1;
        uVar4 = FUN_0087ec90(*(undefined8 *)(param_1 + 0x220));
        *(undefined4 *)(lVar7 + 0x17c) = uVar4;
        *(undefined4 *)(lVar7 + 0x180) = 0;
      }
      plVar8 = plVar8 + 0x2c;
    } while (plVar8 != (long *)plVar6[1]);
  }
  return;
}


