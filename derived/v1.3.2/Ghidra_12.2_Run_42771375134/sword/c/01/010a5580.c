/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a5580; name: FUN_010a5580
 */


ulong FUN_010a5580(void *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined1 local_ff;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  
  lVar4 = (long)param_2 - (long)param_1 >> 5;
  if ((ulong)(lVar4 * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x010a55dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_021638b0 + *(int *)(&DAT_021638b0 + lVar4 * 0x3333333333333334)))(1);
    return uVar3;
  }
  FUN_010a4770(param_1,(long)param_1 + 0xa0,(undefined8 *)((long)param_1 + 0x140),param_3);
  if ((undefined8 *)((long)param_1 + 0x1e0) != param_2) {
    lVar4 = 0;
    iVar7 = 0;
    puVar1 = (undefined8 *)((long)param_1 + 0x1e0);
    puVar6 = (undefined8 *)((long)param_1 + 0x140);
    do {
      puVar5 = puVar1;
      uVar3 = FUN_010a4540(param_3,puVar5,puVar6);
      if ((uVar3 & 1) != 0) {
        local_140 = *puVar5;
        local_138 = puVar5[1];
        uStack_130 = puVar5[2];
        local_128 = puVar5[3];
        local_120 = puVar5[4];
        uStack_118 = puVar5[5];
        local_110 = *(undefined2 *)(puVar5 + 6);
        local_10c = *(undefined4 *)((long)puVar5 + 0x34);
        local_108 = *(undefined2 *)(puVar5 + 7);
        local_104 = *(undefined4 *)((long)puVar5 + 0x3c);
        local_100 = *(undefined1 *)(puVar5 + 8);
        local_ff = *(undefined1 *)((long)puVar5 + 0x41);
        local_fc = *(undefined4 *)((long)puVar5 + 0x44);
        local_f8 = *(undefined4 *)(puVar5 + 9);
        local_f4 = *(undefined4 *)((long)puVar5 + 0x4c);
        local_f0 = puVar5[10];
        uStack_e8 = puVar5[0xb];
        local_e0 = puVar5[0xc];
        uStack_d8 = puVar5[0xd];
        local_d0 = puVar5[0xe];
        uStack_c8 = puVar5[0xf];
        uStack_b0 = puVar5[0x12];
        local_c0 = puVar5[0x10];
        local_b8 = puVar5[0x11];
        local_a8 = *(undefined2 *)(puVar5 + 0x13);
        lVar2 = lVar4;
        do {
          lVar8 = lVar2;
          memcpy((void *)((long)param_1 + lVar8 + 0x1e0),(void *)((long)param_1 + lVar8 + 0x140),
                 0x9a);
          if (lVar8 == -0x140) {
            __dest = param_1;
            goto LAB_010a5820;
          }
          uVar3 = FUN_010a4540(param_3,&local_140,(long)param_1 + lVar8 + 0xa0);
          lVar2 = lVar8 + -0xa0;
        } while ((uVar3 & 1) != 0);
        __dest = (void *)((long)param_1 + lVar8 + 0x140);
LAB_010a5820:
        memcpy(__dest,&local_140,0x9a);
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return (ulong)(puVar5 + 0x14 == param_2);
        }
      }
      lVar4 = lVar4 + 0xa0;
      puVar1 = puVar5 + 0x14;
      puVar6 = puVar5;
    } while (puVar5 + 0x14 != param_2);
  }
  return 1;
}


