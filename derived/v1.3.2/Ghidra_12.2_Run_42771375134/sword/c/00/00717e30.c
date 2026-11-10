/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00717e30; name: FUN_00717e30
 */


void FUN_00717e30(long param_1,uint *param_2)

{
  char *__s;
  int *piVar1;
  uint *puVar2;
  ulong *puVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong local_80;
  char *local_78;
  size_t local_70;
  ulong local_68;
  
  FUN_006dca10(param_1,*param_2);
  puVar5 = PTR_DAT_02710860;
  if (*param_2 != 0) {
    uVar9 = 0;
    do {
      piVar1 = (int *)((long)(param_2 + uVar9 + 1) + (ulong)param_2[uVar9 + 1]);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        lVar6 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar7);
        lVar6 = (long)puVar2 + (ulong)*puVar2;
      }
      __s = (char *)(lVar6 + 4);
      local_70 = strlen(__s);
      bVar4 = *(byte *)(lVar6 + 4);
      local_80 = 0xcbf29ce484222645;
      if (bVar4 != 0) {
        local_80 = 0xcbf29ce484222645;
        pbVar8 = (byte *)(lVar6 + 5);
        do {
          local_80 = (local_80 ^ bVar4) * 0x100000001b3;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 != 0);
      }
      local_68 = 0;
      puVar3 = *(ulong **)(param_1 + 8);
      local_78 = __s;
      if (puVar3 < *(ulong **)(param_1 + 0x10)) {
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        uVar7 = local_68;
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *puVar3 = local_80;
        puVar3[1] = (ulong)local_78;
        puVar3[2] = local_70;
        local_68 = 0;
        puVar3[3] = uVar7;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
      }
      else {
        FUN_0071cce0(param_1,&local_80);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *param_2);
  }
  return;
}


