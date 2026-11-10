/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004619b0; name: FUN_004619b0
 */


void FUN_004619b0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68 [3];
  
  puVar1 = PTR_DAT_02712b50;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x58) == 0) {
      memcpy((void *)(param_1 + 0x18),param_2,0x30);
    }
    else {
      puVar6 = *(undefined4 **)(lVar5 + 0x50);
      do {
        FUN_0049b200(*(undefined8 *)puVar1,param_1,*puVar6,*(undefined1 *)(puVar6 + 1),
                     *(undefined1 *)((long)puVar6 + 5),*(undefined2 *)((long)puVar6 + 6),puVar6[2],
                     puVar6[7],*(undefined8 *)(puVar6 + 4),puVar6[6],param_2,1,1);
        puVar6 = puVar6 + 8;
      } while (puVar6 != (undefined4 *)
                         (*(long *)(lVar5 + 0x50) + (ulong)*(uint *)(lVar5 + 0x58) * 0x20));
      lVar5 = *(long *)(param_1 + 0x10);
      memcpy((void *)(param_1 + 0x18),param_2,0x30);
      if (lVar5 == 0) {
        return;
      }
    }
    puVar1 = PTR_DAT_02712dc0;
    local_98 = *param_2;
    local_68[1] = 0;
    local_68[2] = 0x200000001;
    local_90 = 0xff00;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0x100000000;
    uStack_70 = 0;
    uVar2 = (ulong)*(uint *)(lVar5 + 0x58);
    if (*(uint *)(lVar5 + 0x58) != 0) {
      lVar3 = *(long *)(lVar5 + 0x50);
      lVar4 = lVar3;
      local_68[0] = param_1;
      do {
        if (*(char *)(lVar4 + 4) == '\x02') {
          FUN_004779e0(*(undefined8 *)puVar1,local_68,&local_98,param_3);
          lVar3 = *(long *)(lVar5 + 0x50);
          uVar2 = (ulong)*(uint *)(lVar5 + 0x58);
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar3 + uVar2 * 0x20);
    }
  }
  return;
}


