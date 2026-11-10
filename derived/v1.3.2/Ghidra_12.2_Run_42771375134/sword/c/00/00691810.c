/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00691810; name: FUN_00691810
 */


undefined8 FUN_00691810(long param_1,uint param_2,char *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  
  if (param_3 == (char *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffa;
    if ((param_4 == 0x70) && (*param_3 == '1')) {
      if (param_1 != 0) {
        pcVar5 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar5 == (code *)0x0) {
          pcVar5 = FUN_00694500;
          *(code **)(param_1 + 0x40) = FUN_00694500;
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(code **)(param_1 + 0x48) = FUN_00694510;
        }
        lVar4 = (*pcVar5)(*(undefined8 *)(param_1 + 0x50),1,0x1bf0);
        if (lVar4 == 0) {
          return 0xfffffffc;
        }
        *(long *)(param_1 + 0x38) = lVar4;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 != 0) {
          if ((int)param_2 < 0) {
            iVar8 = 0;
            uVar2 = -param_2;
          }
          else {
            iVar8 = (param_2 >> 4) + 1;
            uVar2 = param_2 & 0xf;
            if (0x2f < (int)param_2) {
              uVar2 = param_2;
            }
          }
          if ((uVar2 == 0) || ((uVar2 & 0xfffffff8) == 8)) {
            if ((*(long *)(lVar7 + 0x40) != 0) && (*(uint *)(lVar7 + 0x30) != uVar2)) {
              (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
              *(undefined8 *)(lVar7 + 0x40) = 0;
            }
            *(int *)(lVar7 + 8) = iVar8;
            *(uint *)(lVar7 + 0x30) = uVar2;
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            if (puVar6 != (undefined8 *)0x0) {
              puVar6[4] = 0;
              *(undefined8 *)(param_1 + 0x60) = 1;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(undefined4 *)((long)puVar6 + 0x14) = 0x8000;
              puVar1 = puVar6 + 0xaa;
              puVar6[0x11] = puVar1;
              *puVar6 = 0;
              *(undefined4 *)((long)puVar6 + 0xc) = 0;
              puVar6[5] = 0;
              *(undefined8 *)((long)puVar6 + 0x34) = 0;
              *(undefined4 *)((long)puVar6 + 0x3c) = 0;
              puVar6[9] = 0;
              *(undefined4 *)(puVar6 + 10) = 0;
              puVar6[0xc] = puVar1;
              puVar6[0xd] = puVar1;
              puVar6[0x37c] = 0xffffffff00000001;
              return 0;
            }
          }
        }
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar4);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}


