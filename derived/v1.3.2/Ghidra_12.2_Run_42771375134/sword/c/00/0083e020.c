/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083e020; name: FUN_0083e020
 */


void FUN_0083e020(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long local_48;
  undefined8 local_40;
  uint *local_38;
  
  local_38 = (uint *)0x0;
  local_48 = *param_2;
  local_40 = 0;
  FUN_0083e190(&local_48,param_1);
  uVar4 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    do {
      while (pbVar7 = (byte *)*puVar6, (*pbVar7 & 1) != 0) {
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        puVar6 = puVar6 + 1;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) goto LAB_0083e09c;
      }
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      puVar6 = puVar6 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
LAB_0083e09c:
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_0083e190(param_1,param_2);
  uVar3 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar3) {
    puVar6 = (undefined8 *)(param_2[2] + 8);
    uVar4 = (ulong)uVar3;
    do {
      while( true ) {
        uVar5 = uVar4;
        pbVar7 = (byte *)*puVar6;
        if ((*pbVar7 & 1) == 0) break;
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        puVar6 = puVar6 + 1;
        uVar4 = uVar5 - 1;
        if (uVar5 - 1 == 0) goto LAB_0083e0f8;
      }
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      puVar6 = puVar6 + 1;
      uVar4 = uVar5 - 1;
    } while (uVar5 - 1 != 0);
LAB_0083e0f8:
    uVar3 = (int)uVar5 - 1;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  puVar2 = (uint *)param_2[2];
  param_2[2] = (long)local_38;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)((long)param_2 + 0xc) = local_40._4_4_;
  local_40 = CONCAT44(uVar1,uVar3);
  if ((puVar2 != (uint *)0x0) && (local_48 == 0)) {
    uVar4 = (ulong)*puVar2;
    local_38 = puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        pbVar7 = *(byte **)puVar2;
        if (pbVar7 != (byte *)0x0) {
          if ((*pbVar7 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + 0x10));
          }
          operator_delete(pbVar7);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if (local_38 == (uint *)0x0) {
        return;
      }
    }
    operator_delete__(local_38);
  }
  return;
}


