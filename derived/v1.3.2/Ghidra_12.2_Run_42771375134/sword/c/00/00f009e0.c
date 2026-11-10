/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f009e0; name: FUN_00f009e0
 */


void FUN_00f009e0(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong local_a0;
  byte *pbStack_98;
  undefined8 local_90;
  long local_88;
  byte local_80 [32];
  
  FUN_00dfdf50(0,*(undefined8 *)PTR_DAT_027194e8,1,0);
  lVar5 = *(long *)(param_1 + 0x1e0);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(lVar5 + 0xb0) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(lVar5 + 0xb8) = uVar1;
  *(undefined1 *)(lVar5 + 0xc0) = 1;
  lVar5 = *(long *)(param_1 + 0x1e0);
  *(undefined8 *)(lVar5 + 0xa8) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined1 *)(lVar5 + 0xc0) = 1;
  if (0 < *(int *)(param_1 + 0x214)) {
    lVar5 = 0;
    do {
      lVar6 = param_1 + lVar5 * 8;
      *(undefined1 *)(*(long *)(lVar6 + 0x108) + 0x218) = 0;
      (**(code **)(**(long **)(lVar6 + 0x108) + 0x1b0))(*(long **)(lVar6 + 0x108),param_1 + 0x280);
      *(undefined1 *)(*(long *)(lVar6 + 0x168) + 0x218) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x214));
  }
  *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0x218) = *(undefined1 *)(param_1 + 0x210);
  if (0 < *(int *)(param_1 + 0x214)) {
    lVar5 = 0;
    do {
      iVar3 = *(int *)(param_1 + lVar5 * 4 + 0xf0);
      lVar6 = *(long *)(*(long *)(param_1 + lVar5 * 8 + 0x108) + 0x410);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          uVar4 = FUN_00a8cbe0(lVar6);
          lVar6 = lVar6 + -0x50;
          if ((uVar4 & 1) == 0) {
            lVar6 = 0;
          }
        }
      }
      snprintf((char *)local_80,0x20,"%s%02d",*(char **)(param_1 + 0x238),iVar3);
      local_a0 = 0xcbf29ce484222645;
      if (local_80[0] != 0) {
        local_a0 = 0xcbf29ce484222645;
        pbVar7 = (byte *)((ulong)local_80 | 1);
        bVar2 = local_80[0];
        do {
          local_a0 = (local_a0 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar2 != 0);
      }
      local_90 = 0x1f;
      local_88 = 0;
      pbStack_98 = local_80;
      iVar3 = FUN_0072e390(*(undefined8 *)(lVar6 + 0x360),&local_a0);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (-1 < iVar3) {
        FUN_0072e410(*(undefined8 *)(lVar6 + 0x360),iVar3,0,0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x214));
  }
  return;
}


