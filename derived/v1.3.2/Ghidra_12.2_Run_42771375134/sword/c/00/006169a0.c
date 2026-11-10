/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006169a0; name: FUN_006169a0
 */


undefined8 FUN_006169a0(long param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  long lVar7;
  uint *puVar8;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    pcVar5 = *(code **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pcVar5 == (code *)0x0) {
      pcVar5 = FUN_00620620;
      *(code **)(param_1 + 0x40) = FUN_00620620;
      *(undefined8 *)(param_1 + 0x50) = 0;
      lVar7 = *(long *)(param_1 + 0x48);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x48);
    }
    if (lVar7 == 0) {
      *(undefined1 **)(param_1 + 0x48) = &LAB_00620650;
    }
    lVar7 = (*pcVar5)(*(undefined8 *)(param_1 + 0x50),1,0x28);
    *(long *)(param_1 + 0x38) = lVar7;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x18) = 0;
      if ((int)param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x18) = 1;
      }
      if ((param_2 & 0xfffffff8) != 8) {
        FUN_00618650(param_1);
        return 0xfffffffe;
      }
      *(uint *)(*(long *)(param_1 + 0x38) + 0x1c) = param_2;
      iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
      pcVar5 = (code *)&LAB_00620660;
      if (iVar1 != 0) {
        pcVar5 = (code *)0x0;
      }
      puVar2 = (undefined4 *)(**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),1,0x70);
      if (puVar2 != (undefined4 *)0x0) {
        lVar7 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),8,0x5a0);
        *(long *)(puVar2 + 0xe) = lVar7;
        if (lVar7 != 0) {
          uVar4 = 1 << (ulong)(param_2 & 0x1f);
          lVar7 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),1,uVar4);
          *(long *)(puVar2 + 0x10) = lVar7;
          if (lVar7 != 0) {
            *(long *)(puVar2 + 0x16) = lVar7;
            *(code **)(puVar2 + 0x18) = pcVar5;
            *puVar2 = 0;
            puVar2[0xb] = 0;
            *(undefined8 *)(puVar2 + 0xc) = 0;
            *(ulong *)(puVar2 + 0x12) = lVar7 + (ulong)uVar4;
            *(long *)(puVar2 + 0x14) = lVar7;
            if (iVar1 == 0) {
              uVar3 = (*pcVar5)(0,0,0);
              *(undefined8 *)(puVar2 + 0x1a) = uVar3;
              *(undefined8 *)(param_1 + 0x60) = uVar3;
            }
            *(undefined4 **)(*(long *)(param_1 + 0x38) + 0x20) = puVar2;
            puVar2 = *(undefined4 **)(param_1 + 0x38);
            if (puVar2 != (undefined4 *)0x0) {
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x30) = 0;
              uVar6 = 0;
              if (puVar2[6] != 0) {
                uVar6 = 7;
              }
              *puVar2 = uVar6;
              puVar8 = *(uint **)(*(long *)(param_1 + 0x38) + 0x20);
              uVar4 = *puVar8;
              if ((uVar4 & 0xfffffffe) == 4) {
                (**(code **)(param_1 + 0x48))
                          (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(puVar8 + 4));
                uVar4 = *puVar8;
              }
              if (uVar4 == 6) {
                (**(code **)(param_1 + 0x48))
                          (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(puVar8 + 2));
              }
              *(undefined8 *)(puVar8 + 0x14) = *(undefined8 *)(puVar8 + 0x10);
              *(undefined8 *)(puVar8 + 0x16) = *(undefined8 *)(puVar8 + 0x10);
              *puVar8 = 0;
              puVar8[0xb] = 0;
              puVar8[0xc] = 0;
              puVar8[0xd] = 0;
              if (*(code **)(puVar8 + 0x18) != (code *)0x0) {
                uVar3 = (**(code **)(puVar8 + 0x18))(0,0,0);
                *(undefined8 *)(puVar8 + 0x1a) = uVar3;
                *(undefined8 *)(param_1 + 0x60) = uVar3;
                return 0;
              }
            }
            return 0;
          }
          (**(code **)(param_1 + 0x48))
                    (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(puVar2 + 0xe));
        }
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),puVar2);
      }
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = 0;
      FUN_00618650(param_1);
    }
    uVar3 = 0xfffffffc;
  }
  return uVar3;
}


