/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014cdd90; name: FUN_014cdd90
 */


ulong FUN_014cdd90(long param_1,long *param_2,ulong param_3,long param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  param_3 = param_3 & 0xffffffff;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (param_5 != 0) {
    uVar7 = 0;
    puVar6 = (uint *)(param_1 + param_3 * 0x18 + 0x78);
    do {
      if ((8 < *(byte *)(param_4 + uVar7) ||
           (1 << (ulong)(*(byte *)(param_4 + uVar7) & 0x1f) & 0x124U) == 0) ||
         (uVar2 = FUN_01510f00(lVar5,0xbf8cdf02032a1569), (uVar2 & 1) != 0)) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_009fe380(lVar4,param_2);
        *(long **)(lVar4 + 8) = param_2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 400;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*(long *)(puVar6 + 2) != 0) {
          (**(code **)(*(long *)(*(long *)(puVar6 + 2) + 0x48) + 0x18))();
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        *(long *)(puVar6 + 2) = lVar4;
        *puVar6 = (uint)*(byte *)(param_4 + uVar7);
        uVar1 = FUN_009feac0(lVar4,*(undefined1 *)(param_4 + uVar7));
        puVar6[4] = uVar1;
        *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(param_4 + uVar7);
        puVar6 = puVar6 + 6;
        param_3 = (ulong)((int)param_3 + 1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_5);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return param_3;
}


