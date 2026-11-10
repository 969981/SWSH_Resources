/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d80e0; name: FUN_001d80e0
 */


void FUN_001d80e0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *local_70;
  undefined1 local_68;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 >> 3 & 1) != 0) {
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      lVar5 = FUN_001d1a00(*param_1,uVar1 >> 0x18 & 0xf);
      uVar1 = *(uint *)(param_1 + 1);
      param_1[2] = lVar5;
    }
    puVar2 = PTR_DAT_02711068;
    if ((uVar1 >> 0x1e == 2) &&
       (uVar3 = (ulong)*(uint *)(lVar5 + 0x90), *(uint *)(lVar5 + 0x90) != 0)) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar4 = *(long *)(lVar5 + 0x88);
        puVar6 = *(undefined8 **)(lVar4 + lVar7);
        if ((*(uint *)(puVar6 + 1) & 0xf000000) == 0x1000000) {
          *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) & 0x3fffffff;
          *puVar6 = 0;
        }
        if ((*(byte *)(*(long *)(puVar2 + ((ulong)*(byte *)((long)param_1 + 0xb) & 0xf) * 8 + 0x30)
                       + (long)param_1 + 0xc) >> 3 & 1) == 0) {
          lVar9 = *param_1;
          FUN_003d9640(*(long *)(puVar2 + ((ulong)*(byte *)((long)param_1 + 0xb) & 0xf) * 8 + 0x30)
                       + (long)param_1,puVar6 + 4,*(char *)(lVar4 + lVar7 + 8) != '\0');
          if ((*(byte *)((long)puVar6 + 0xb) >> 4 & 1) != 0) {
            FUN_001e4d30(puVar6);
            local_70 = puVar6;
            FUN_001d6940(lVar9 + 0x1fe8,&local_70);
            *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) & 0xefffffff;
          }
          FUN_00206d50(puVar6);
          uVar3 = (ulong)*(uint *)(lVar5 + 0x90);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar8 < uVar3);
    }
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_001d8250(lVar5 + 0x40,0,&local_70);
    FUN_001d8390(lVar5 + 0x40,*(undefined4 *)(lVar5 + 0x90));
  }
  return;
}


