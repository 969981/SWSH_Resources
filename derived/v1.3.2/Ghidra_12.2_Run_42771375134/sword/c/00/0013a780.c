/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013a780; name: FUN_0013a780
 */


undefined8 FUN_0013a780(uint *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint local_68;
  uint uStack_64;
  
  uVar8 = param_1[2];
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = 0;
    do {
      while( true ) {
        lVar6 = *(long *)(param_1 + 8);
        puVar4 = (uint *)(lVar6 + uVar7 * 0xc);
        if ((char)puVar4[2] == '\0') break;
        local_68 = *(uint *)(param_2 + (ulong)(*puVar4 >> 2) * 0xc);
        uVar2 = *(uint *)(param_2 + (ulong)(*(uint *)(lVar6 + uVar7 * 0xc + 4) >> 2) * 0xc);
        uStack_64 = uVar2;
        if (uVar2 <= local_68) {
          uStack_64 = local_68;
          local_68 = uVar2;
        }
        if (*(uint *)(param_3 + 0xa8) < (*(uint *)(param_3 + 0xac) & 0x7fffffff)) {
          *(ulong *)(*(long *)(param_3 + 0xa0) + (ulong)*(uint *)(param_3 + 0xa8) * 8) =
               CONCAT44(uStack_64,local_68);
          *(int *)(param_3 + 0xa8) = *(int *)(param_3 + 0xa8) + 1;
        }
        else {
          FUN_0013c130(param_3 + 0xa0,&local_68);
        }
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined1 *)(lVar6 + uVar7 * 0xc + 9) = 0;
joined_r0x0013a85c:
        uVar2 = (uint)uVar7 + 1;
        uVar7 = (ulong)uVar2;
        if (uVar8 <= uVar2) goto LAB_0013aa00;
      }
      pcVar5 = (char *)(lVar6 + uVar7 * 0xc + 9);
      if (*pcVar5 != '\0') {
        *pcVar5 = '\0';
        goto joined_r0x0013a85c;
      }
      uVar2 = *puVar4;
      uVar1 = *(uint *)(lVar6 + uVar7 * 0xc + 4);
      uVar3 = uVar2 >> 7;
      if (((*(uint *)(param_4 + 1) <= uVar3) ||
          ((*(uint *)(*param_4 + (ulong)uVar3 * 4) & 1 << (ulong)(uVar2 >> 2 & 0x1f)) == 0)) &&
         ((*(uint *)(param_4 + 1) <= uVar1 >> 7 ||
          ((*(uint *)(*param_4 + (ulong)(uVar1 >> 7) * 4) & 1 << (ulong)(uVar1 >> 2 & 0x1f)) == 0)))
         ) goto joined_r0x0013a85c;
      if (((*(uint *)(param_5 + 1) <= uVar3) ||
          ((*(uint *)(*param_5 + (ulong)uVar3 * 4) & 1 << (ulong)(uVar2 >> 2 & 0x1f)) == 0)) &&
         ((*(uint *)(param_5 + 1) <= uVar1 >> 7 ||
          ((*(uint *)(*param_5 + (ulong)(uVar1 >> 7) * 4) & 1 << (ulong)(uVar1 >> 2 & 0x1f)) == 0)))
         ) {
        local_68 = *(uint *)(param_2 + (ulong)(uVar2 >> 2) * 0xc);
        uVar2 = *(uint *)(param_2 + (ulong)(uVar1 >> 2) * 0xc);
        uStack_64 = uVar2;
        if (uVar2 <= local_68) {
          uStack_64 = local_68;
          local_68 = uVar2;
        }
        if (*(uint *)(param_3 + 0xb8) < (*(uint *)(param_3 + 0xbc) & 0x7fffffff)) {
          *(ulong *)(*(long *)(param_3 + 0xb0) + (ulong)*(uint *)(param_3 + 0xb8) * 8) =
               CONCAT44(uStack_64,local_68);
          *(int *)(param_3 + 0xb8) = *(int *)(param_3 + 0xb8) + 1;
        }
        else {
          FUN_0013c130(param_3 + 0xb0,&local_68);
        }
      }
      FUN_001369d0(param_1);
      uVar8 = uVar8 - 1;
    } while ((uint)uVar7 < uVar8);
LAB_0013aa00:
    uVar8 = param_1[2];
  }
  uVar8 = uVar8 | uVar8 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar2 = uVar8 + 1;
  if ((*param_1 != uVar2) && (param_1[10] <= uVar2)) {
    *param_1 = uVar2;
    param_1[1] = uVar8;
    FUN_00136790(param_1);
  }
  return 1;
}


